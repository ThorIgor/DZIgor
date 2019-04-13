#include"ClothingFactory.h"
#include"Weapon.h"

void main()
{
	// 1 ------------------------------------
	Factory *factory = new SportFactory();
	Tshirt *tshirt = &factory->creatTshirt();
	tshirt->print();
	system("pause");

	// 2 ------------------------------------
	Pistol pis;
	Shotgun shotg;
	Weapon *weapon[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			weapon[i] = &pis.clone();
		else
			weapon[i] = &shotg.clone();
	}
	for (auto i : weapon)
		i->print();
	system("pause");

}