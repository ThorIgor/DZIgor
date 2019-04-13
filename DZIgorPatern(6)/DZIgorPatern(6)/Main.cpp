#include "Observer.h"
#include <ctime>

void main()
{
	// 1 ----------------------------
	srand(time(0));
	USD usd(25.3);
	usd.AddSubscriber(new Bank);
	usd.AddSubscriber(new Broker);
	usd.AddSubscriber(new Broker);
	while (true)
	{
		double rnd = rand() % 101 / 100.0 - 0.5;
		cout << "USD: " << usd.GetRate() << endl;
		cout << "Change: " << rnd << endl;
		usd.SetRate(usd.GetRate() + rnd);
		system("pause");
	}

}