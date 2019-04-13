#include<iostream>
#include<vector>

using namespace std;

class Client
{

};

class Account
{
	int number;
	int passwd;
	double sum;
public:
	Account(const int &num, const int &pass, const double &s = 0) : number(num), passwd(pass), sum(s)
	{}

	void PrintInf()
	{
		int pass;
		cout << "Password: ";
		cin >> pass;
		if (pass == passwd)
			cout << "Number: " << number << " Sum: " << sum << endl;
		else
			cout << "Error" << endl;
	}
	void GetMoney(const double &s)
	{
		int pass;
		cout << "Password: ";
		cin >> pass;
		if (pass == passwd && sum >= s)
		{
			cout << "Get money: " << s << endl;
			sum -= s;
		}
		else
			cout << "Error" << endl;
	}
};

class Service
{

};

class CashMañhine
{

};

class Bank
{
	vector<Account> accounts;

	void AddAccount(Account)
	{

	}
};