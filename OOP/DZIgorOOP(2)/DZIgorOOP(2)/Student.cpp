#include "Student.h"

//Constr
Student::Student()
{
	SetName("Guest");
	SetSize(0);
}
Student::Student(const char * newN, const int &sizeM)
{
	SetName(newN);
	SetSize(sizeM);
}
Student::Student(Student &Stud)
{

	SetName(Stud.LastName);
	SetSize(Stud.sizeM);
}

//Set
void Student::SetName(const char * newN)
{
	if (LastName == nullptr)
		delete[]LastName;
	LastName = new char[strlen(newN) + 1];
	strcpy_s(LastName, strlen(newN) + 1, newN);
}
void Student::SetSize(const int & newS)
{
	if (sizeM == 0)
		marks = new int[newS];
	else
	{
		int *dop = new int[sizeM];
		for (int i = 0; i < sizeM; i++)
			dop[i] = marks[i];
		delete[]marks;
		marks = new int[newS];
		for (int i = 0; i < (newS > sizeM) ? sizeM : newS; i++)
			marks[i] = dop[i];
		delete[]dop;
	}
	sizeM = newS;
}
void Student::SetMark(const int & les, const int &newM)
{
	if (les >= 0 && les < sizeM && newM >= min && newM <= max)
		marks[les] = newM;
}

//Get
int Student::GetSize() const
{
	return sizeM;
}
int Student::GetMark(const int &les) const
{
	if (les >= 0 && les < sizeM)
		return marks[les];
	else
		return 0;
}

//Print
void Student::print()
{
	cout << LastName << endl;
	cout << "Marks: " << endl;
	for (int i = 0; i < sizeM; i++)
		cout << i + 1 << ". " << marks[i] << endl;
	cout << "Min: " << min << "  Max: " << max << endl;
}

//Destr
Student::~Student()
{
	delete[]LastName;
	delete[]marks;
}
