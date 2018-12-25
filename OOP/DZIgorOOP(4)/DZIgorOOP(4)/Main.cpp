#include<iostream>
#include"Train.h"
#include"TV.h"
using namespace std;

void main()
{
	/*Train train;
	cout << train << train.GetCar(1);
	Car car;
	cin >> car;
	cout << car;*/

	TV tv;
	Remote rem;
	rem.power(tv);
	tv.print();
	system("pause");
}