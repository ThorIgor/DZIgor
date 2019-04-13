#include<iostream>
#include<string>

using namespace std;

class Weapon abstract
{
	int dmg;
public:
	Weapon(const int &d) : dmg(d)
	{}
	virtual Weapon &clone() = 0;
	virtual void print()
	{
		cout << typeid(*this).name() + 6 << " dmg: " << dmg << endl;
	}
};

class Pistol : public Weapon
{
public:
	Pistol() : Weapon(4)
	{}
	Weapon &clone()
	{
		Weapon *pis = new Pistol();
		return *pis;
	}
};

class Shotgun : public Weapon
{
public:
	Shotgun() : Weapon(10)
	{}
	Weapon &clone()
	{
		Weapon *pis = new Shotgun();
		return *pis;
	}
};
