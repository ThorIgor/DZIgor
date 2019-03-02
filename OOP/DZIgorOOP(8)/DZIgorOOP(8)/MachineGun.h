#include<iostream>

using namespace std;

class Bullet
{
	int num;
	static int dopNum;
public:
	Bullet() : num(dopNum)
	{dopNum++;}
	void Shot()
	{
		if (rand() % 100 < 70)
			cout << "Bullet " << num << " shot" << endl;
		else
			cout << "Bullet " << num << " miss" << endl;
	}
};

class Mag
{
	vector<Bullet> bul;
	static const int max = 30;
public:
	Mag()
	{
		bul.reserve(30);
	}
	void Charge(Bullet &b)
	{
		if (bul.size() < max)
		{
			bul.push_back(b);
			cout << "Charging ..." << endl;
		}
		else
			cout << "Mag is full" << endl;
	}
	Bullet Give()
	{
		if (bul.empty())
		{
			Bullet b;
			Charge(b);
		}
		Bullet give = bul.back();
		bul.pop_back();
		return give;
	}
};

class MachineGun
{
	Mag *mag;
public:
	void ChangeMag(Mag &m)
	{
		mag = &m;
		cout << "New mag..." << endl;
	}
	void Shot()
	{
		mag->Give().Shot();
	}
};
