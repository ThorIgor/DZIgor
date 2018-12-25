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
	