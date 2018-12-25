#include <iostream>

using namespace std;

class Fraction
{

	int num = 0, denom = 1;
public:
	int getNum() const
	{
		return num;
	}
	int getDenom() const 
	{
		return denom;
	}
	void setNum(int num)
	{
		this->num = num;
	}
	void setDenom(int denom) 
	{
		if (denom == 0)
		{
			denom = 1;
		}
		else if (denom < 0)
		{
			num *= -1;
			denom *= -1;
		}
		this->denom = denom;
	}

	Fraction() = default;
	Fraction(int num, int denom = 1);

	void print() const;
	void reduce();
	
	Fraction operator + (const Fraction& two) const; 
	Fraction operator + (const int &two) const;
	Fraction operator - (const Fraction& two) const;
	Fraction operator * (const Fraction& two) const;
	Fraction operator * (const int &two) const;
	Fraction operator / (const Fraction& two) const;

	bool operator == (const Fraction& two) const; 
	bool operator != (const Fraction& two) const;
	bool operator < (const Fraction& two) const;
	bool operator > (const Fraction& two) const;
	

	Fraction & operator ++ ();
	Fraction  operator ++ (int);
	Fraction & operator -- ();
	Fraction  operator -- (int);

	Fraction & operator - ();

	~Fraction();
};