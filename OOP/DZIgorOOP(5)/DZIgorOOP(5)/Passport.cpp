#include "Passport.h"

//Passport -------------------------------------------------------------------


Passport::Passport(const string & fn, const int & ser, const int & num) 
{
	SetFirstName(fn);
	SetSeries(ser);
	SetNumber(num);
}


void Passport::SetFirstName(const string & fn)
{
	FirstName = fn;
}
void Passport::SetSeries(const int & ser)
{
	if (ser < 0)
		series = 0;
	else
		series = ser;
}
void Passport::SetNumber(const int & num)
{
	if (num < 0)
		number = 0;
	else
		number = num;
}


string Passport::GetFirstName() const
{
	return FirstName;
}
int Passport::GetSeries() const
{
	return series;
}
int Passport::GetNumber() const
{
	return number;
}


void Passport::print() const
{
	cout << "First name: " << FirstName << endl;
	cout << "Series: " << series << endl;
	cout << "Number: " << number << endl;
}


Passport::~Passport()
{}


//Date ---------------------------------------------------------------


Date::Date(const int & d, const int & m, const int & y) : day(d), month(m), year(y)
{}


void Date::SetDate(const int & d, const int & m, const int & y) // 0 - if dont want change
{
	(d > 0 && d <= 31)? day = d: day;
	(m > 0 && m <= 12) ? month = m : month;
	(y > 0) ? year = y : year;
}


int Date::GetDay() const
{
	return day;
}
int Date::GetMonth() const
{
	return month;
}
int Date::GetYear() const
{
	return year;
}


void Date::print() const
{
	cout << day << "." << month << "." << year;
}


Date::~Date()
{}

//friend
ostream &operator<<(ostream & os, const Date & date)
{
	os << date.day << "." << date.month << "." << date.year;
	return os;
}


//Visa -------------------------------------------------------------------


Visa::Visa(const string & C, const Date & d) : Country(C), date(d)
{}
Visa::Visa(const string & C, const int & d, const int & m, const int & y) : Country(C), date(d, m, y)
{}


void Visa::SetCountry(const string & C)
{
	Country = C;
}
void Visa::SetDate(const Date & d)
{
	date = d;
}
void Visa::SetDate(const int & d, const int & m, const int & y)
{
	date = Date(d, m, y);
}


string Visa::GetCountry() const
{
	return Country;
}
Date Visa::GetDate() const
{
	return date;
}


void Visa::print() const
{
	cout << "Country: " << Country << endl;
	cout << "Date: " << date << endl;
}


Visa::~Visa()
{}


//ForeignPassport -----------------------------------------------------------------


ForeignPassport::ForeignPassport(const string & fn, const int & ser, const int & num) : Passport(fn, ser, num)
{}
ForeignPassport::ForeignPassport(const Passport & pass, const Visa * visa, const int & countVis)
{
	FirstName = pass.GetFirstName();
	series = pass.GetSeries();
	number = pass.GetNumber();
	visas.reserve(countVis);
	for (int i = 0; i < countVis; i++)
		visas.push_back(visa[i]);
}


Visa & ForeignPassport::operator[](const int & n)
{
	if (n < 0 || n > visas.size())
		return visas[0];
	else
		return visas[n];
}
void ForeignPassport::NewVisa(const Visa & v)
{
	visas.push_back(v);
}
void ForeignPassport::NewVisa(const string & C, const int & d, const int & m, const int & y)
{
	visas.push_back(Visa(C, d, m, y));
}
void ForeignPassport::DelVisa(const int & n)
{
	if (n < 0 || n >= visas.size())
		cerr << "Error" << endl;
	else
	{
		swap(visas[n], visas.back());
		visas.resize(visas.size() - 1);
	}
}


void ForeignPassport::print() const
{
	Passport::print();
	cout << "Visas: " << endl;
	for (int i = 0; i < visas.size(); i++)
		visas[i].print();
}


ForeignPassport::~ForeignPassport()
{}
