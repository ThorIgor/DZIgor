#include"Passport.h"
#include"Ship.h"
#include"Fortres.h"

using namespace std;

void main()
{
	/*
	ForeignPassport fp("Dan Tohus antonovich", 2893, 1485);
	fp.NewVisa(Visa("Greece", 10, 12, 2020));
	fp.NewVisa(Visa("Germany", 20, 10, 2030));
	fp.DelVisa(1);
	fp.print();
	*/

	/*
	Amphibia am;
	am.print();
	*/

	Fortres fort;
	fort.ArcherTower::AddAmm(4);
	fort.Catapult::AddAmm(1);
	for (int i = 0; i < 3; i++)
		fort.ArcherTower::ArShoot();
	for (int i = 0; i < 2; i++)
		fort.ArcherTower::RaShoot();
	fort.Catapult::Shoot();


	system("pause");
}