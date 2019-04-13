#include"House.h"
#include"Barak.h"

int main()
{
	Accountant ac;
	Director dir(ac);
	cout << dir.make(9.5, 3, 7.123, 5) << endl;
	HeadBuilder hb;
	dir.changeBuilder(hb);
	cout << dir.make(7, 3, 4, 5) << endl;

	/*Barac *arr[] = { new WarBarac, new ScienceBarac, new MedicBarac };
	Unit *arrU[] = { arr[0]->CreatUnit(), arr[1]->CreatUnit(), arr[2]->CreatUnit() };
	for (auto i : arrU)
		i->print();*/

	system("pause");
}