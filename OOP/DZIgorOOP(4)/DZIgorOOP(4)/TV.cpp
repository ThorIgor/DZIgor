#include "TV.h"

TV::TV()
{
	OnOff = false;
	Loud = 50;
	Chanel = 1;
	CountChanel = 10;
	MaxLoud = 100;
}

TV::TV(int CC, int ML)
{
	if (CC < 1)
		CC = 1;
	if (ML < 1)
		ML = 1;

	OnOff = false;
	Loud = 50;
	Chanel = 1;
	CountChanel = CC;
	MaxLoud = ML;
}

void TV::power()
{
	(OnOff == 0)? OnOff = true: OnOff = false;
}

void TV::nextChannel()
{
	if (OnOff = true)
		(Chanel + 1 > CountChanel) ? Chanel = 1 : Chanel++ ;
}

void TV::prevChannel()
{
	if (OnOff = true)
		(Chanel - 1 < 0) ? Chanel = CountChanel : Chanel--;
}

void TV::incVolume()
{
	(Loud > MaxLoud) ? Loud = 1 : Loud++;
}

void TV::decVolume()
{
	(Loud < 0) ? Loud = MaxLoud : Loud--;
}

void TV::print()
{
	cout << "TV: " << (OnOff == 0) ? "off" : "on";
	cout << endl;
	cout << "Loud: " << Loud << endl;
	cout << "Chanel: " << Chanel << endl;
}

void Remote::power(TV & tv)
{
	tv.power();
}

void Remote::nextChannel(TV & tv)
{
	tv.nextChannel();
}

void Remote::prevChannel(TV & tv)
{
	tv.prevChannel();
}

void Remote::incVolume(TV & tv)
{
	tv.incVolume();
}

void Remote::decVolume(TV & tv)
{
	tv.decVolume();
}

void Remote::goToChanel(TV & tv, const int & n)
{
	if (n < 1 && n > tv.CountChanel)
		cerr << "Error" << endl;
	else
		tv.Chanel == n;
}
