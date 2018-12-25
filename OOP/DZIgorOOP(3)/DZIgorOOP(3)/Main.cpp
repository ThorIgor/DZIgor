#include<ctime>

#include "Fraction.h"
#include "Train.h"

using namespace std;

void main()
{
	srand(time(0));

	/*Fraction one(4, 7), two(1, 2);
	(one / two).print();
	(one * two).print();
	(one + two).print();
	(one - two).print();
	(one + 2).print();
	(one - 1).print();*/

	int trains, cars;
	cout << "Trains: ";
	cin >> trains;
	cout << "Cars: ";
	cin >> cars;
	Train *train;
	train = new Train[trains];
	for (int i = 0; i < trains; i++)
	{
		train[i].SetLength(cars);
		for (int j = 0; j < cars; j++)
			train[i].SetCar(rand() % 50 + 1, j);
	}
	Train max, min;
	min.SetCar(100000, 0);
	cout << endl << "Trains: " << endl;
	for (int i = 0; i < trains; i++)
	{
		train[i].print();
		cout << endl;
		if (train[i].AllPass() > max.AllPass())
			max = train[i];
		if (train[i].AllPass() < min.AllPass())
			min = train[i];
	}
	cout << endl << "Max: " << endl;
	max.print();
	cout << endl << "Min: " << endl;
	min.print();



	system("pause");
}