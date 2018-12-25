#include <iostream>
using namespace std;
#include "Fraction.h"


Fraction::Fraction(int num, int denom)// 
{
	setNum(num);
	setDenom(denom);
	reduce();
}


void Fraction::print() const
{
	cout << num << "/" << denom << endl;
}
void Fraction::reduce()
{
	int dop1, dop2;
	if (num > denom)
	{
		dop1 = num;
		dop2 = denom;
	}
	else
	{
		dop1 = denom;
		dop2 = num;
	}
	while (true)
	{
		if (dop1%dop2 == 0)
		{
			num /= dop2;
			denom /= dop2;
			break;
		}
		else
		{
			int pr = dop1%dop2;
			dop1 = dop2;
			dop2 = pr;
		}
	}
	if (denom == 0)
	{
		denom = 1;
	}
	else if (denom < 0)
	{
		num *= -1;
		denom *= -1;
	}
}


Fraction Fraction::operator+(const Fraction & two) const
{
	Fraction result(num * two.denom + denom * two.num, denom * two.denom);
	result.reduce();
	return  result;
}
Fraction Fraction::operator+(const int & two) const
{
	Fraction result(num+two*denom, denom);
	result.reduce();
	return result;
}
Fraction Fraction::operator-(const Fraction & two) const
{
	Fraction result(num * two.denom - denom * two.num, denom * two.denom);
	result.reduce();
	return result;
}
Fraction Fraction::operator*(const Fraction & two) const
{
	Fraction result(num * two.num, denom * two.denom);;
	result.reduce();
	return result;
}
Fraction Fraction::operator*(const int & two) const
{
	Fraction result(num*two, denom);
	result.reduce();
	return result;
}
Fraction Fraction::operator/(const Fraction & two) const
{
	Fraction result;
	if (two.denom != 0)
	{
		result = { num * two.denom, denom * two.num };
		result.reduce();
		return result;
	}
	else
		return result = { 0, 1 };
}


bool Fraction::operator==(const Fraction & two) const
{
	return this->num * two.denom == this->denom * two.num;
}
bool Fraction::operator!=(const Fraction & two) const
{
	return this->num * two.denom != this->denom * two.num;
}
bool Fraction::operator<(const Fraction & two) const
{
	return this->num * two.denom < this->denom * two.num;
}
bool Fraction::operator>(const Fraction & two) const
{
	return this->num * two.denom > this->denom * two.num;
}


Fraction & Fraction::operator++() 
{
	this->num += denom;
	reduce();
	return *this;
}
Fraction Fraction::operator++(int)
{
	Fraction old(num, denom);
	++(*this);
	reduce();
	return old;
}

Fraction & Fraction::operator--()
{
	num -= denom;
	reduce();
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction old(num, denom);
	--(*this);
	reduce();
	return old;
}


Fraction & Fraction::operator-()
{
	num *= -1;
	reduce();
	return *this;
}


Fraction::~Fraction()
{
}
