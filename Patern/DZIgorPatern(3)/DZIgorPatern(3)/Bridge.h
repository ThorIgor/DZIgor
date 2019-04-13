#include<iostream>

using namespace std;

class Language abstract
{
public:
	virtual float salaryK() const = 0;
};

class Work abstract
{
public:
	virtual float salary() const = 0;
};

class Cpp : public Language
{
public:
	float salaryK() const override
	{
		return 1;
	}
};

class Cs : public Language
{
public:
	float salaryK() const override
	{
		return 1.5;
	}
};

class FreeLance : public Work
{
public:
	float salary() const override
	{
		return 10000;
	}
};

class Company : public Work
{
public:
	float salary() const override
	{
		return 8000;
	}
};

class Programer
{
	Language *language;
	Work *work;
	float salary;
public:
	Programer(Language *l, Work *w) : language(l), work(w), salary(0)
	{}
	void Work()
	{
		salary += work->salary()*language->salaryK();
	}
	float GetSalary() const
	{
		return salary;
	}
};