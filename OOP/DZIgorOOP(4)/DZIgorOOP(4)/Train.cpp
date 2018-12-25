#include "Train.h"

Car::Car()
{
	type = Plackart;
	pass = 0;
}
Car::Car(const int & p, const Type & t)
{
	type = t;
	pass = p;
}


void Car::SetType(const Type &t)
{
	type = t;
}
void Car::SetPass(const int & p)
{
	if (p < 0)
	{
		cerr << "Error" << endl;
		pass = 0;
	}
	else
		pass = p;
}


Type Car::GetType()
{
	return type;
}
int Car::GetPass()
{
	return pass;
}


void Car::print() const
{
	cout << "Type: ";
	switch (type)
	{
	case Kupe:cout << "Kupe";
		break;
	case Plackart:cout << "Plackart";
		break;
	case Sleeping:cout << "Sleeping";
	}
	cout << endl;
	cout << "Passengers: " << pass << endl;
}

Car Car::operator=(const Car & two)
{
	SetType(two.type);
	SetPass(two.pass);
	return *this;
}

//Train

Train::Train() 
{
	num = rand()%100000;
	SetName("Train");
	SetLength(5);
}
Train::Train(const int & n, const char * newN, const int & l)
{
	num = n;
	SetName(newN);
	SetLength(l);

}
Train::Train(const Train & newT)
{
	num = newT.num;
	SetName(newT.name);
	SetLength(newT.length);
	for (int i = 0; i < length; i++)
		car[i] = newT.car[i];
}


void Train::SetNum(const int & n)
{
		num = n;
}
void Train::SetName(const char * newN)
{
	if (name == nullptr)
		delete[]name;
	name = new char[strlen(newN) + 1];
	strcpy_s(name, strlen(newN) + 1, newN);
}
void Train::SetCar(const Car & newC, const int & n)
{
	if (n >= 0 && n < length)
		car[n] = newC;
}
void Train::SetLength(const int & size)
{
	if (car = nullptr)
		delete[]car;
	car = new Car[size];
	length = size;
}


int Train::GetNum() const 
{
	return num;
}
Car Train::GetCar(const int & n) const
{
	if (n >= 0 && n < length)
		return car[n];
}
int Train::GetLength() const
{
	return length;
}

Car Train::MaxPass() const
{
	Car max;
	for (int i = 0; i < length; i++)
	{
		if (car[i].GetPass() > max.GetPass())
			max = car[i];
	}
	return max;
}
Car Train::MinPass() const
{
	Car min(1000);
	for (int i = 0; i < length; i++)
	{
		if (car[i].GetPass() < min.GetPass())
			min = car[i];
	}
	return min;
}
int Train::AllPass() const
{
	int all = 0;
	for (int i = 0; i < length; i++)
		all += car[i].GetPass();
	return all;
}


void Train::print() const
{
	cout << "Number: " << num << endl;
	cout << name << endl;
	cout << "Passengers: " << AllPass() << endl;
	cout << "Cars: " << length << endl;
	Car dop;
	int in;
	for (int i = 0; i < length; i++)
	{
		if (car[i].GetPass() > dop.GetPass())
		{
			dop = car[i];
			in = i;
		}
	}
	cout << "Car max: " << in << endl;
	for (int i = 0; i < length; i++)
	{
		if (car[i].GetPass() < dop.GetPass())
		{
			dop = car[i];
			in = i;
		}
	}
	cout << "Car min: " << in << endl;
}


Train Train::operator=(const Train & two)
{
	SetNum(two.num);
	SetLength(two.length);
	SetName(two.name);
	for (int i = 0; i < length; i++)
		SetCar(two.car[i], i);
	return *this;
}
Car & Train::operator[](const int & n) const
{
	Car dop;
	if (num < 0 || num > length)
	{
		cerr << "Error" << endl;
		return dop;
	}
	else
		return car[num];
}
void Train::operator()(const int & n, const int & pass, int type)
{
	if (n < 0 || n > length)
		cerr << "Error" << endl;
	else
	{
		(type == -1)?type = car[n].GetType(): type;
		car[n].SetPass(pass);
		car[n].SetType(Type(type));
	}
}


ostream & operator<<(ostream & os, const Car &car)
{
	char *dop;
	switch (car.type)
	{
	case Kupe:
		dop = new char[5];
		strcpy_s(dop, 5, "Kupe");
		break;
	case Plackart:
		dop = new char[9];
		strcpy_s(dop, 9, "Plackart");
		break;
	case Sleeping:
		dop = new char[9];
		strcpy_s(dop, 9, "Sleeping");
		break;
	default:
		dop = new char[5];
		strcpy_s(dop, 5, "Else");
	}
	os << "Pass: " << car.pass << endl << "Type: " << dop << endl;
	delete[]dop;
	return os;
}
istream & operator>>(istream & is, Car & car)
{
	int dop;
	is >> dop >> car.pass;
	car.type = Type(dop);
	return is;
}
ostream & operator<<(ostream & os, const Train & train)
{
	os << "Number: " << train.num << endl << train.name << endl << "Passengers: " << train.AllPass() << endl << "Cars: " << train.length << endl;
	return os;
}
