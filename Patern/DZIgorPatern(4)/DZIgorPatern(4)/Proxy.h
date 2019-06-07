#include<iostream>
#include<vector>

using namespace std;

class Account
{
	int number;
	int passwd;
	double sum;
public:
	Account(const int &num, const int &pass, const double &s = 0) : number(num), passwd(pass), sum(s)
	{}

	void PrintInf() const
	{
		int pass;
		cout << "Password: ";
		cin >> pass;
		if (pass == passwd)
			cout << "Number: " << number << " Sum: " << sum << endl;
		else
			cout << "Password is wrong" << endl;
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
			cout << "Password is wrong or you dont have enough money on account" << endl;
	}
	int GetNumber() const
	{
		return number;
	}
};

class Service abstract
{ 
public:
	virtual void PrintInf(const int &number) = 0;
	virtual void GetMoney(const int &number, const double &s) = 0;
};

class Bank : public Service
{
	vector<Account> accounts;
	Account* Search(const int & number)
	{
		for (int i = 0; i < accounts.size(); i++)
		{
			if (number == accounts[i].GetNumber())
				return &accounts[i];
		}
		return nullptr;
	}
public:
	void AddAccount(const Account &a)
	{
		if (Search(a.GetNumber()) == nullptr)
			accounts.push_back(a);
		else
			cout << "Please change number" << endl;
	}
	void AddAccount(const int &number, const int &passwd, const double &s = 0)
	{
		if (Search(number) == nullptr)
			accounts.push_back(*(new Account(number, passwd, s)));
		else
			cout << "Please change number" << endl;
	}
	
	void PrintInf(const int &number) override
	{
		Account *ac = Search(number);
		if (ac != nullptr)
			ac->PrintInf();
		else
			cout << "Number is wrong" << endl;
	}
	void GetMoney(const int &number, const double &s) override
	{
		Account *ac = Search(number);
		if (ac != nullptr)
			ac->GetMoney(s);
		else
			cout << "Number is wrong" << endl;
	}
};

class CashMañhine : public Service
{
	Bank *bank;
public:
	CashMañhine(Bank *b) : bank(b)
	{}

	void Proxy(Bank *b)
	{
		bank = b;
	}
	bool CheckAccess()
	{
		if(bank == nullptr)
			cout << "It isnt working" << endl;
		return bank != nullptr;
	}

	void PrintInf(const int &number)
	{
		if (CheckAccess())
			bank->PrintInf(number);
	}
	void GetMoney(const int &number, const double &s) override
	{
		if (CheckAccess())
			bank->GetMoney(number, s);
	}
};