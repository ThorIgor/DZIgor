#include "Observer.h"
#include "ChainOfResponsibility.h"
#include <ctime>

void main()
{
	srand(time(0));

	// 1 ----------------------------
	/*
	USD usd(25.3);
	usd.AddSubscriber(new Bank(26.6));
	usd.AddSubscriber(new Broker(28.7));
	usd.AddSubscriber(new Broker(27.3));
	while (true)
	{
		double rnd = rand() % 101 / 100.0 - 0.5;
		cout << "USD: " << usd.GetRate() << endl;
		cout << "Change: " << rnd << endl;
		usd.SetRate(usd.GetRate() + rnd);
		system("pause");
	}
	*/
	// 2 -----------------------------

	CashMachine CM(50, 70, 200, 300);
	while (true)
	{
		int money;
		cout << "Money: ";
		cin >> money;
		CM.Withdraw(money);
	}
}