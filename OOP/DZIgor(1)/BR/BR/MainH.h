#include<iostream>
#include<ctime>
#include<conio.h>

using namespace std;

void SetColor(int text, int background);

class Acount
{
private:
	int currency; // 0-grn 1-dol 2-eur 3-rub
	double money;
	double exchangeRate;
public:
	int NumberAcount;
	char passwd[20];
	void NewAcount(int NA, char pas[])
	{
		NumberAcount = NA;
		strcpy_s(passwd, strlen(pas)+1, pas);
		currency = 0;
		money = 100;
		exchangeRate = 1;
	};

	void ChangeCurr(int NewCurr, double exRate)
	{
		currency = NewCurr;
		money=(money*exchangeRate)/exRate;
		exchangeRate = exRate;
	};

	void AddMoney(double add)
	{
		money+=add;
	};

	void SubMoney(double sub)
	{
		money-=sub;
	};

	double Money()
	{
		return money;
	}

	int Currency()
	{
		return currency;
	}

	double ExR()
	{
		return exchangeRate;
	};
};

class DataBase
{
private:
	Acount *acounts, *dop;
	int size;
	void AcountSize()
	{
		dop = new Acount [size+1];
		for(int i = 0; i < size; i++)
			dop[i] = acounts[i];
		acounts = new Acount [size+1];
		for(int i = 0; i < size; i++)
			acounts[i] = dop[i];
		size++;
	};

	void Sort()
	{
		for(int i = 0; i < size; i++)
		{
			for(int j = i; j < size; j++)
			{
				if(acounts[i].NumberAcount > acounts[j].NumberAcount)
					swap(acounts[i], acounts[j]);

			}
		}
	};

	int Find(int num)
	{
		if(size < 10)
		{
			for(int i = 0; i < size; i++)
			{
				if(acounts[i].NumberAcount == num)
					return i+1;
			}
		}
		else
		{
			int numDop = size/2;
			while(true)
			{
				if(num == acounts[numDop].NumberAcount)
					return numDop+1;
				if(num > acounts[numDop].NumberAcount)
				{
					numDop+=numDop/2;
				}
				else 
					numDop/=2;
			}
		}
		return 0;
	};
public:
	DataBase()
	{
		size = 0;
	};
	// -------------------------------
	bool NewAcount(int num, char pas[])
	{
		bool find;
		find = Find(num);
		if(find)
			return 0;
		else
		{
			AcountSize();
			acounts[size-1].NewAcount(num, pas);
			Sort();
			return 1;
		}
	};
	// --------------------------------
	bool SignIn(int num, char pas[])
	{
		int in;
		bool find = false;
		for(int i = 0; i < size; i++)
		{
			if(acounts[i].NumberAcount == num)
			{
				in = i;
				find = true;
				break;
			}
		}
		if(!find)
			return 0;
		find = false;
		for(int i = 0; i < size; i++)
		{
			if(!strcmp(acounts[i].passwd, pas) && in == i)
			{
				find = true;
				break;
			}
		}
		if(!find)
			return 0;
		else
			return 1;
	};
	// ------------------------------
	double MoneyAcount(int num)
	{
		int in;
		in = Find(num);
		return acounts[in-1].Money();
	};

	int CurrencyAcount(int num)
	{
		int in;
		in = Find(num);
		return acounts[in-1].Currency();
	};

	double ExR(int num)
	{
		int in;
		in = Find(num);
		return acounts[in-1].ExR();
	}

	void ChangeCurr(int num, int curr, double ER)
	{
		int in;
		in = Find(num);
		acounts[in-1].ChangeCurr(curr, ER);
	};
	// ---------------------------------------------------------
	bool Send(int numSender, int numReceiver, double money)
	{
		int sender, receiver;
		sender = Find(numSender);
		if(sender == 0)
			return 0;
		receiver = Find(numReceiver);
		if(receiver == 0)
			return 0;
		if(acounts[sender-1].Money()*acounts[sender-1].ExR() >= money)
		{
			acounts[sender-1].SubMoney(money/acounts[sender-1].ExR());
			acounts[receiver-1].AddMoney(money/acounts[receiver-1].ExR());
			return 1;
		}
		else
			return 0;
	};
	// ------------------------------------------------
	bool Get(int num, double moneyGet)
	{
		int in;
		in = Find(num);
		if(in == 0)
			return 0;
		if(acounts[in-1].Money() >= moneyGet)
		{
			acounts[in-1].SubMoney(moneyGet);
			return 1;
		}
		else
			return 0;
	};

	bool Give(int num, double moneyGive)
	{
		int in;
		in = Find(num);
		if(in == 0)
			return 0;
		acounts[in-1].AddMoney(moneyGive);
		return 1;
	}

};