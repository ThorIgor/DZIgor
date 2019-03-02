#include<iostream>
#include<string>

using namespace std;

class Mashine
{
	string number;
	double maxSpeed, speed;
public:
	class WrongSpeed
	{
		string error;
	public:
		WrongSpeed(const string &s = "Wrong speed") : error(s)
		{}
		string what()
		{
			return error;
		}
	};
	class WrongMaxSpeeed
	{
		string error;
	public:
		WrongMaxSpeeed(const string &s = "Wrong max speed") : error(s)
		{}
		string what()
		{
			return error;
		}
	};
	class InvalidNumber
	{
		string error;
	public:
		InvalidNumber(const string &s = "Invalid number") : error(s)
		{}
		string what()
		{
			return error;
		}
	};

	Mashine(const string &n, const double &m = 160)
	{
		try
		{
			SetNumber(n);
			SetMaxSpeed(m);
			SetSpeed(0);
		}
		catch (InvalidNumber m)
		{
			cout << m.what() << endl;
			throw;
		}
		catch (WrongMaxSpeeed m)
		{
			cout << m.what() << endl;
			throw;
		}
		catch (...)
		{
			cout << "Unknown error" << endl;
			throw;
		}
	}

	void SetNumber(const string &n)
	{
		if (n.size() > 8 || n.size() < 4)
		{
			string ms = "Invalid number - " + n;
			throw InvalidNumber();
		}
		number = n;
	}
	void SetMaxSpeed(const double &max)
	{
		if (max < 0 || max > 1000)
		{
			string ms = "Wrong max speed - " + to_string(max);
			throw WrongMaxSpeeed(ms);
		}
		maxSpeed = max;
	}
	void SetSpeed(const double &s)
	{
		if (s < 0 || s > maxSpeed)
		{
			string ms = "Wrong speed - " + to_string(s);
			throw WrongSpeed(ms);
		}
		speed = s;
	}

	string getNumber() const
	{
		return number;
	}
	double getMaxSpeed() const
	{
		return maxSpeed;
	}
	double getSpeed() const
	{
		return speed;
	}

	void IncreaseSpeed(const double &s = 5)
	{
		try
		{
			SetSpeed(speed + s);
		}
		catch (WrongSpeed m)
		{
			cout << m.what() << endl;
		}
	}
	void ReduceSpeed(const double &s = 5)
	{
		try
		{
			SetSpeed(speed - s);
		}
		catch (WrongSpeed m)
		{
			cout << m.what() << endl;
		}
	}
};
