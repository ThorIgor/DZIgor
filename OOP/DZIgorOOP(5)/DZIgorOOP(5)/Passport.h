#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Passport
{
protected:
	string FirstName;
	int series;
	int number;
public:
	Passport(const string &fn = "Bob Bobenko Bobwuch", const int &ser = 1, const int &num = 1);

	void SetFirstName(const string &fn);
	void SetSeries(const int &ser);
	void SetNumber(const int &num);

	string GetFirstName() const;
	int GetSeries() const;
	int GetNumber() const;

	void print() const;

	~Passport();
};



class Date
{
	int day, month, year;
public:
	Date(const int &d = 1, const int &m = 1, const int &y = 2000);

	void SetDate(const int &d = 0, const int &m = 0, const int &y = 0);

	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;

	void print() const;
	friend ostream &operator << (ostream &os, const Date &date);

	~Date();
};



class Visa
{
	string Country;
	Date date;
public:
	explicit Visa(const string &C, const Date &d);
	explicit Visa(const string &C = "Ukraine", const int &d = 1, const int &m = 1, const int &y = 2000);

	void SetCountry(const string &C);
	void SetDate(const Date &d);
	void SetDate(const int &d, const int &m, const int &y);

	string GetCountry() const;
	Date GetDate() const;

	void print() const;

	~Visa();
};



class ForeignPassport : public Passport
{
	vector<Visa>visas;
public:
	using Passport::FirstName;
	using Passport::number;
	using Passport::series;

	ForeignPassport(const string &fn = "Bob Bobenko Bobwuch", const int &ser = 1, const int &num = 1);
	ForeignPassport(const Passport &pass, const Visa *visa, const int &countVis);

	Visa &operator [](const int &n);
	void NewVisa(const Visa &v);
	void NewVisa(const string &C, const int &d, const int &m, const int &y);
	void DelVisa(const int &n);

	void print() const;

	~ForeignPassport();
};