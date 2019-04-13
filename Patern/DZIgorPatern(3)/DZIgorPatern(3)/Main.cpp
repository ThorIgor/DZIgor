#include<ctime>

#include"Weapon.h"
#include"Car.h"
#include"Bridge.h"

void main()
{
	srand(time(0));
	// 1 -----------------------------------------------
	Weapon *pis = new Pistol;
	Weapon *sho = new Shotgun;
	Weapon *weapon[] = { &pis->Clone(), &sho->Clone() };
	for (auto i : weapon)
		i->shot();
	

	// 2 -----------------------------------------------
	Driver dr;
	dr.drive();

	// 3 -----------------------------------------------
	Programer pr((new Cs), (new FreeLance));
	pr.Work();
	cout << "Salary: " << pr.GetSalary() << endl;


	system("pause");
}