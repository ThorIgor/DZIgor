#include<iostream>
#include<string>

using namespace std;

class Tshirt abstract
{
public:
	virtual void print()
	{
		cout << typeid(*this).name() + 6 << endl;
	}
};

class Shorts abstract
{
public:
	virtual void print()
	{
		cout << typeid(*this).name() + 6 << endl;
	}
};

class CommonTshirt : public Tshirt
{
public:

};

class SportTshirt : public Tshirt
{
public:

};

class CommonShorts : public Shorts
{
public:

};

class SportShorts : public Shorts
{
public:

};

class Factory abstract
{
public:
	virtual Tshirt &creatTshirt() = 0;
	virtual Shorts &creatShorts() = 0;
};

class CommonFactory : public Factory
{
public:
	Tshirt &creatTshirt() override
	{
		Tshirt *tshirt = new CommonTshirt();
		return *tshirt;
	}
	Shorts &creatShorts() override
	{
		Shorts *shorts = new CommonShorts();
		return *shorts;
	}
};

class SportFactory : public Factory
{
public:
	Tshirt &creatTshirt() override
	{
		Tshirt *tshirt = new SportTshirt();
		return *tshirt;
	}
	Shorts &creatShorts() override
	{
		Shorts *shorts = new SportShorts();
		return *shorts;
	}
};