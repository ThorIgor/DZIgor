#include "Fortres.h"

Shooter::Shooter(const string & nA, const int & cA) : nameAmm(nA), countAmm(cA)
{}
void Shooter::Shoot()
{
	if (countAmm > 0)
	{
		countAmm--;
		cout << "Shoot! " << nameAmm << "! ";
	}

}
void Shooter::AddAmm(const int & dop)
{
	if (dop > 0)
		countAmm += dop;
}


Archer::Archer(const int & cA) : Shooter("Arrow", cA)
{}
void Archer::Shoot()
{
	Shooter::Shoot();
	cout << "Archer!" << endl;
}


Range::Range(const int & cA) : Shooter("Arrow", cA)
{}
void Range::Shoot()
{
	Shooter::Shoot();
	cout << "Range!" << endl;
}


Catapult::Catapult(const int & cA) : Shooter("Stone", cA)
{}
void Catapult::Shoot()
{
	Shooter::Shoot();
	cout << "Catapult!!!" << endl;
}


ArcherTower::ArcherTower(const int & cA) : Shooter("Arrow", cA), Archer(cA), Range(cA)
{}

void ArcherTower::ArShoot()
{
	Archer::Shoot();
}

void ArcherTower::RaShoot()
{
	Range::Shoot();
}


Fortres::Fortres(const int & a, const int & s) : ArcherTower(a), Catapult(s), gate(100), wall(100)
{}
