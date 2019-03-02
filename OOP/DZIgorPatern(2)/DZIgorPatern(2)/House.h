#include<iostream>
#include<string>
using namespace std;

class Builder abstract
{
public:
	virtual void reset() = 0;
	virtual string getResult() = 0;
	virtual void BuildBasement(const double &s) = 0;
	virtual void BuildWall(const double &h) = 0;
	virtual void BuildRoof(const double &h) = 0;
	virtual void BuildWindows(const int &c) = 0;
};

class HeadBuilder : public Builder
{
	string *product = nullptr;
public:
	void reset() override
	{
		delete product;
		product = new string();
	}
	string getResult() override
	{
		return *product;
	}

	void BuildBasement(const double &s) override
	{
		(*product) += "Basement area: " + to_string(s) + "m2\n";
	}
	void BuildWall(const double &h) override
	{
		(*product) += "Wall height: " + to_string(h) + "m\n";
	}
	void BuildRoof(const double &h) override
	{
		(*product) += "Roof height: " + to_string(h) + "m\n";
	}
	void BuildWindows(const int &ñ) override
	{
		(*product) += "Window count: " + to_string(ñ) + "m\n";
	}
};

class Accountant : public Builder
{
	double *product = nullptr;
public:
	void reset() override
	{
		if(product != nullptr)
			delete product;
		product = new double();
	}
	string getResult() override
	{
		string res = "Sum: " + to_string(*product) + "grn";
		return res;
	}

	void BuildBasement(const double &s) override
	{
		(*product) += s * 7800;
	}
	void BuildWall(const double &h) override
	{
		(*product) += h* 5340;
	}
	void BuildRoof(const double &h) override
	{
		(*product) += h * 1270;
	}
	void BuildWindows(const int &c) override
	{
		(*product) += c * 12800;
	}
};

class Director
{
	Builder *builder;
public:
	Director(Builder &b)
	{
		builder = &b;
	}
	void changeBuilder(Builder &b)
	{
		builder = &b;
	}
	string make(const double &s, const double &hw, const double &hr, const int &c)
	{
		builder->reset();
		builder->BuildBasement(s);
		builder->BuildWall(hw);
		builder->BuildRoof(hr);
		builder->BuildWindows(c);
		return builder->getResult();
	}
};
