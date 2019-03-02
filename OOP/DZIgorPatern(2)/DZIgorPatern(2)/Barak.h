#include<iostream>
#include<string>

using namespace std;

class Unit abstract
{
protected:
	int hp, dmg;
public:
	Unit(const int &h, const int &d) : hp(h), dmg(d)
	{}

	virtual void print() const
	{
		cout << typeid(*this).name() + 6 << " HP: " << hp << " DMG: " << dmg << endl;
	}
};

class SeaUnit : public Unit
{
public:
	SeaUnit() : Unit(20, 5)
	{}
};

class MadScientist : public Unit
{
public:
	MadScientist() : Unit(10, 25)
	{}
};

class WarMedic : public Unit
{
public:
	WarMedic() : Unit(10, 2)
	{}
};

// -----------------------------------

class Barac abstract
{
public:
	virtual Unit *CreatUnit() = 0;
};

class WarBarac : public Barac
{
public:
	Unit *CreatUnit() override
	{
		Unit *u = new SeaUnit;
		return u;
	}
};

class ScienceBarac : public Barac
{
public:
	Unit *CreatUnit() override
	{
		Unit *u = new MadScientist;
		return u;
	}
};

class MedicBarac : public Barac
{
public:
	Unit *CreatUnit() override
	{
		Unit *u = new WarMedic;
		return u;
	}
};