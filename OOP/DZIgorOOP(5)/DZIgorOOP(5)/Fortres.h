#include<iostream>
#include<string>

using namespace std;

class Shooter
{
protected:
	string nameAmm;
	int countAmm;
public:
	Shooter(const string &nA = "Arrow", const int &cA = 0);

	void Shoot();
	void AddAmm(const int &dop);
};


class Archer : virtual public Shooter
{
public:
	Archer(const int &cA = 0);

	void Shoot();
};


class Range : virtual public Shooter
{
public:
	Range(const int &cA = 0);

	void Shoot();
};


class Catapult : public Shooter
{
public:
	Catapult(const int &cA = 10);

	void Shoot();
};


class ArcherTower : public Archer, public Range
{
public:
	ArcherTower(const int &cA = 0);

	void ArShoot();
	void RaShoot();
};

class Fortres : public ArcherTower, public Catapult
{
	int gate, wall;
public:
	Fortres(const int &a = 0, const int &s = 0);
};
