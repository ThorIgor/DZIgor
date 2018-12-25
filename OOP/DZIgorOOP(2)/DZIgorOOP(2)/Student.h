#include<iostream>

using namespace std;

class Student
{
private:
	char *LastName = nullptr;
	int sizeM = 0;
	int *marks = nullptr;
	static const int min = 1, max = 12;
public:
	Student();
	Student(const char *newN, const int &sizeM = 0);
	Student(Student &Stud);

	void SetName(const char *newN);
	void SetSize(const int &newS);
	void SetMark(const int &les, const int &newM);

	int GetSize() const;
	int GetMark(const int &les) const;

	void print();

	~Student();
};
