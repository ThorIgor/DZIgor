#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

#include "MachineGun.h"

int Bullet::dopNum = rand()%1000;

/*template<typename T>
struct result
{
	T minimum, maximum;
	result(T min, T max) : minimum(min), maximum(max)
	{}
	void print()
	{
		cout << "Minimum: " << minimum << endl;
		cout << "Maximum: " << maximum << endl;
	}
};
template<typename T>
result<T> max_min(const initializer_list<T> &list)
{
	vector<T> dop = list;
	result<T> res(dop[0], dop[0]);
	for (auto i : dop)
	{
		if (i < res.minimum)
			res.minimum = i;
		if (i > res.maximum)
			res.maximum = i;
	}
	return res;
}*/


int main()
{
	srand(time(0));
	MachineGun mg;
	Mag dop;
	for (int i = 0; i < 32; i++)
	{
		Bullet b;
		dop.Charge(b);
	}
	mg.ChangeMag(dop);
	for (int i = 0; i < 50; i++)
		mg.Shot();
	system("pause");
	return 0;
}