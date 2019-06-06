#include<iostream>
#include<vector>

using namespace std;

class Subscriber abstract
{
public:
	virtual void Update(const double &rate) = 0;
};

class Bank : public Subscriber
{
	double changeRate;
public:
	Bank(const double &cr = 25) : changeRate(cr)
	{}
	void Update(const double &rate) override
	{
		if (rate < 25)
			cout << "Bank buy USD" << endl;
		else
			cout << "Bank sell USD" << endl;
	}
};

class Broker : public Subscriber
{
	double changeRate;
public:
	Broker(const double &cr = 25) : changeRate(cr)
	{}
	void Update(const double &rate) override
	{
		if (rate < changeRate)
			cout << "Broker buy USD" << endl;
		else
			cout << "Broker sell USD" << endl;
		changeRate = rate;
	}
};

class USD
{
	vector<Subscriber *> subscribers;
	double rate;
public:
	USD(const double &r)
	{
		SetRate(r);
	}
	void SetRate(const double &r)
	{
		if (r < 0)
			return;
		rate = r;
		for (auto el : subscribers)
			el->Update(rate);
	}
	double GetRate() const
	{
		return rate;
	}
	void AddSubscriber(Subscriber *s)
	{
		subscribers.push_back(s);
	}
	void DelSubscriber(Subscriber *s)
	{
		for (int i = 0; i < subscribers.size(); i++)
		{
			if (s == subscribers[i])
			{
				swap(subscribers[i], subscribers[subscribers.size()]);
				subscribers.pop_back();
				break;
			}
		}
	}
};
