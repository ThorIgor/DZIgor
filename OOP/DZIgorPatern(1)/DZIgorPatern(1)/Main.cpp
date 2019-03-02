#include"Factory.h"

WinFactory *WinFactory::factory = nullptr;
MacFactory *MacFactory::factory = nullptr;


void main()
{
	Factory *f = WinFactory::gatFactory();
	Client cl;
	cl.Factory(f);
	cl.creatUI();
	cl.print();
	system("pause");
}