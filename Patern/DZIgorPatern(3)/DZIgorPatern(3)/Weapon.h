#include<iostream>

using namespace std;

class Weapon abstract
{
	int dmg, ammo;
public:
	Weapon(const int &d, const int &a) : dmg(d), ammo(a)
	{}
	virtual Weapon &Clone() const = 0;
	virtual void shot() const
	{
		cout << typeid(*this).name() + 6 << " is shooting dmg: " << dmg << " ammo: " << ammo << endl;
	}
};

class Pistol : public Weapon
{
public:
	Pistol() : Weapon(5, 15)
	{}
	Weapon &Clone() const override
	{
		Weapon *pistol = new Pistol();
		return *pistol;
	}
};

class Shotgun : public Weapon
{
public:
	Shotgun() : Weapon(20, 2)
	{}
	Weapon &Clone() const override
	{
		Weapon *shotgun = new Shotgun();
		return *shotgun;
	}
};
