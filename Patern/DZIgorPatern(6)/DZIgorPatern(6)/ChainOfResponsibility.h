#include <iostream>

using namespace std;

class Handler abstract
{
public:
	virtual void Handle(int money, int bn[]) = 0;
};

class BaseHandler : public Handler
{
protected:
	Handler *next;
public:
	BaseHandler(Handler *h = nullptr) : next(h)
	{}
	virtual void Handle(int money, int bn[]) override
	{
		if (next != nullptr)
			next->Handle(money, bn);
	}
};
class ThirdHandler : public BaseHandler
{
public:
	ThirdHandler() : BaseHandler()
	{}
	void Handle(int money, int bn[]) override
	{
		int dop[4];
		for (int i = 0; i < 4; i++)
			dop[i] = bn[i];
		int bankN[4];
		bankN[0] = money / 100;
		bankN[1] = money % 100 / 50;
		bankN[2] = money % 100 % 50 / 20;
		bankN[3] = money % 100 % 50 % 20 / 5;
		bn[0] -= bankN[0];
		if (bn[0] < 0)
		{
			bn[1] += bn[0] * 2;
			bn[0] = 0;
		}
		bn[1] -= bankN[1];
		if (bn[1] < 0)
		{
			bn[2] += bn[1] * 2;
			bn[3] += bn[1] * 2;
			bn[1] = 0;
		}
		bn[2] -= bankN[2];
		if (bn[2] < 0)
		{
			bn[3] += bn[2] * 4;
			bn[2] = 0;
		}
		bn[3] -= bankN[3];
		if (bn[3] < 0)
		{
			for (int i = 0; i < 4; i++)
				bn[i] = dop[i];
			cout << "Error. There isnt valid banknotes in cash machine" << endl;
			return;
		}
		cout << "100: " << dop[0] - bn[0] << endl;
		cout << "50:  " << dop[1] - bn[1] << endl;
		cout << "20:  " << dop[2] - bn[2] << endl;
		cout << "5:   " << dop[3] - bn[3] << endl;
	}
};
class SecondHandler : public BaseHandler
{
public:
	SecondHandler() : BaseHandler(new ThirdHandler)
	{}
	void Handle(int money, int bn[]) override
	{
		int sum = 0;
		sum += bn[0] * 100;
		sum += bn[1] * 50;
		sum += bn[2] * 20;
		sum += bn[3] * 5;
		if (money > sum)
		{
			cout << "Error. Sorry there isnt enough money in cash machine";
			return;
		}
		else
			next->Handle(money, bn);
	}
};
class FirstHandler : public BaseHandler
{
public:
	FirstHandler() : BaseHandler(new SecondHandler)
	{}
	void Handle(int money, int bn[]) override
	{
		if (money <= 0 || money % 5 != 0)
		{
			cout << "Error. Invalid sum of money" << endl;
			return;
		}
		else
			next->Handle(money, bn);
	}
};




class CashMachine
{
	int banknotes[4];
	Handler *handler;
public:
	CashMachine(const int &hu = 0, const int &fy = 0, const int &t = 0, const int &fi = 0)
	{
		handler = new FirstHandler;
		banknotes[0] = hu;
		banknotes[1] = fy;
		banknotes[2] = t;
		banknotes[3] = fi;
	}
	void Withdraw(int money)
	{
		handler->Handle(money, banknotes);
	}
	void AddBanknotes(const int &hu = 0, const int &fy = 0, const int &t = 0, const int &fi = 0)
	{
		banknotes[0] += hu;
		banknotes[1] += fy;
		banknotes[2] += t;
		banknotes[3] += fi;
	}
	void Print()
	{
		cout << "100: " << banknotes[0] << " 50: " << banknotes[1] << " 20: " << banknotes[2] << " 5: " << banknotes[3] << endl;
	}
};