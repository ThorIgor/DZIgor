#include "Water.h"
//Constr
Water::Water()
{
	SetName("Lake");
	type = Lake;
	width = 5;
	height = 5;
	deep = 5;
	count++;
}
Water::Water(const char * newN, const Type & newT, const int & newW, const int & newH, const int & newD)
{
	SetName(newN);
	type = newT;
	width = newW;
	height = newH;
	deep = newD;
	count++;
}

//Set
void Water::SetName(const char * newN)
{
	if (name == nullptr)
		delete[]name;
	name = new char[strlen(newN) + 1];
	strcpy_s(name, strlen(newN) + 1, newN);
}
void Water::SetType(const Type & newT)
{
	type = newT;
}
void Water::SetSize(const int & newW, const int & newH, const int & newD)
{
	width = newW;
	height = newH;
	deep = newD;
}

//Get
Type Water::GetType() const
{
	return Type(type);
}
int Water::GetW() const
{
	return width;
}
int Water::GetH() const
{
	return height;
}
int Water::GetD() const
{
	return deep;
}

//Dop
int Water::V() const
{
	return width*height*deep;
}
int Water::S() const
{
	return width*height;
}

//Print
void Water::print()
{
	cout << name << endl;
	cout << "Type: ";
	switch (type)
	{
	case Lake:
		cout << "Lake" << endl;
		break;
	case River:
		cout << "River" << endl;
		break;
	case Sea:
		cout << "Sea" << endl;
		break;
	case Ocean:
		cout << "Ocean" << endl;
	}
	cout << "Size: " << width << " " << height << " " << deep << endl;
	cout << "Count: " << count << endl;
}

//Static
bool Water::OneType(const Water &a, const Water &b)
{
	return a.type == b.type;
}
int Water::Compare(const Water &a, const Water &b)
{
	if(a.S() > b.S())
		return 1;
	if (a.S() < b.S())
		return -1;
	else
		return 0;
}
int Water::Biggest(const Water a[], const Type &t, const int &size)
{
	int max = 0, in;
	for (int i = 0; i < size; i++)
	{
		if (a[i].type == t && a->S() > max)
		{
			max = a->S();
			in = i;
		}
	}
	return in;
}
