#include"MainH.h"
#include"Menu.h"

using namespace std;

ClassConsolMenu menu;
DataBase Data;

char passwd[20];
char numDop[20], numDopSend[20];
char dopMoney[20];
double ERDol, EREur, ERRub;
bool good;

void Default();
void Draw();
void InPut();

void Clear(char arr[]);

void main()
{
	srand(time(0));
	Default();
	while(menu.EndPrgOut())
	{
		system("cls");
		Draw();
		InPut();
	}
}

void Default()
{
	ERDol = (rand()%100+200.0)/10.0;
	EREur = (rand()%100+300.0)/10.0;
	ERRub = (rand()%10)/10.0;
	good = false;
};

void Draw()
{
	if(menu.MenuOut() == 1)
	{
		SetColor(10, 0);
		cout << "..::Bank Account::.." << endl;
		SetColor(15, 0);
		menu.Enable(0, 0);
		cout << "Sign in" << endl;
		menu.Enable(1, 0);
		cout << "Sign up" << endl;
		menu.Enable(2, 0);
		SetColor(12, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 2)
	{
		SetColor(15, 0);
		menu.Enable(0, 0);
		cout << "Number:";
		SetColor(10, 0);
		cout << numDop << endl;
		SetColor(15, 0);
		menu.Enable(1, 0);
		cout << "Password:";
		SetColor(10, 0);
		cout << passwd << endl;
		SetColor(15, 0);
		menu.Enable(2, 0);
		cout << "Sign In" << endl;
		SetColor(12, 0);
		menu.Enable(3, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 3)
	{
		SetColor(15, 0);
		menu.Enable(0, 0);
		cout << "Number:";
		SetColor(10, 0);
		cout << numDop << endl;
		SetColor(15, 0);
		menu.Enable(1, 0);
		cout << "Password:";
		SetColor(10, 0);
		cout << passwd << endl;
		SetColor(15, 0);
		menu.Enable(2, 0);
		cout << "Sign Up" << endl;
		SetColor(12, 0);
		menu.Enable(3, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 4)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		menu.Enable(0, 0);
		cout << "Money" << endl;
		menu.Enable(1, 0);
		cout << "Change currency" << endl;
		menu.Enable(2, 0);
		cout << "Send money" << endl;
		menu.Enable(3, 0);
		cout << "Get money" << endl;
		menu.Enable(4, 0);
		cout << "Give money" << endl;
		SetColor(12, 0);
		menu.Enable(5, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 5)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		cout << "Money: ";
		SetColor(10, 0);
		cout << Data.MoneyAcount(atoi(numDop)) << endl;
		SetColor(15, 0);
		cout << "Currency: ";
		SetColor(10, 0);
		if(Data.CurrencyAcount(atoi(numDop)) == 0)
			cout << "Grn";
		if(Data.CurrencyAcount(atoi(numDop)) == 1)
			cout << "Dol";
		if(Data.CurrencyAcount(atoi(numDop)) == 2)
			cout << "Eur";
		if(Data.CurrencyAcount(atoi(numDop)) == 3)
			cout << "Rub";
		cout << endl;
		SetColor(12, 0);
		menu.Enable(0, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 6)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		cout << "Dol: ";
		SetColor(10, 0);
		cout << ERDol;
		SetColor(15, 0);
		cout << "  Eur: ";
		SetColor(10, 0);
		cout << EREur;
		SetColor(15, 0);
		cout << "  Rub: ";
		SetColor(10, 0);
		cout << ERRub << endl;
		SetColor(15, 0);
		cout << "Currency: ";
		SetColor(10, 0);
		if(Data.CurrencyAcount(atoi(numDop)) == 0)
			cout << "Grn";
		if(Data.CurrencyAcount(atoi(numDop)) == 1)
			cout << "Dol";
		if(Data.CurrencyAcount(atoi(numDop)) == 2)
			cout << "Eur";
		if(Data.CurrencyAcount(atoi(numDop)) == 3)
			cout << "Rub";
		cout << endl;
		menu.Enable(0, 0);
		cout << "Grn  ";
		menu.Enable(0, 1);
		cout << "Dol  " << endl;
		menu.Enable(1, 0);
		cout << "Eur  ";
		menu.Enable(1, 1);
		cout << "Rub  " << endl;
		SetColor(12, 0);
		menu.Enable(2, 0);
		menu.Enable(2, 1);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 7)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		cout << "Money: ";
		SetColor(10, 0);
		cout << Data.MoneyAcount(atoi(numDop)) << endl;
		SetColor(15, 0);
		if(good)
		{
			SetColor(10, 0);
			cout << "Sending is successful" << endl;
			SetColor(15, 0);
		}
		menu.Enable(0, 0);
		cout << "Number Send:";
		SetColor(10, 0);
		cout << numDopSend << endl;
		SetColor(15, 0);
		menu.Enable(1, 0);
		cout << "Money Send:";
		SetColor(10, 0);
		cout << dopMoney << endl;
		SetColor(15, 0);
		menu.Enable(2, 0);
		cout << "Send" << endl;
		SetColor(12, 0);
		menu.Enable(3, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 8)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		cout << "Money: ";
		SetColor(10, 0);
		cout << Data.MoneyAcount(atoi(numDop)) << endl;
		SetColor(15, 0);
		if(good)
		{
			SetColor(10, 0);
			cout << "Geting is successful" << endl;
			SetColor(15, 0);
		}
		menu.Enable(0, 0);
		cout << "Get money:";
		SetColor(10, 0);
		cout << dopMoney << endl;
		SetColor(15, 0);
		menu.Enable(1, 0);
		cout << "Get" << endl;
		SetColor(12, 0);
		menu.Enable(2, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	}
	if(menu.MenuOut() == 9)
	{
		SetColor(10, 0);
		cout << "Number: " << numDop << endl;
		SetColor(15, 0);
		cout << "Money: ";
		SetColor(10, 0);
		cout << Data.MoneyAcount(atoi(numDop)) << endl;
		SetColor(15, 0);
		if(good)
		{
			SetColor(10, 0);
			cout << "Giving is successful" << endl;
			SetColor(15, 0);
		}
		menu.Enable(0, 0);
		cout << "Give money:";
		SetColor(10, 0);
		cout << dopMoney << endl;
		SetColor(15, 0);
		menu.Enable(1, 0);
		cout << "Give" << endl;
		SetColor(12, 0);
		menu.Enable(2, 0);
		cout << "Exit" << endl;
		SetColor(7, 0);
	};
};

void InPut()
{
	char button;
	while(!_kbhit()) {}
	button = _getch();
	good = false;
	menu.Move(button);
	if(menu.MenuOut() == 1)
	{
		if(button == ' ')
		{
			if(menu.PozY() == 0)
			{
				menu.MenuIn(2);
				Clear(numDop);
				Clear(passwd);
			}
			if(menu.PozY() == 1)
			{
				menu.MenuIn(3);
				Clear(numDop);
				Clear(passwd);
			}
			if(menu.PozY() == 2)
				menu.EndPrgIn();
		}
	}
	else if(menu.MenuOut() == 2)
	{
		if(menu.PozY() == 0 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, numDop);
		if(menu.PozY() == 1)
			menu.Write(button, passwd);
		if(button == ' ')
		{
			if(menu.PozY() == 2)
			{
				bool dop;
				dop = Data.SignIn(atoi(numDop), passwd);
				if(dop)
					menu.MenuIn(4);
			}
			if(menu.PozY() == 3)
				menu.MenuIn(1);
		}
	}
	else if(menu.MenuOut() == 3)
	{
		if(menu.PozY() == 0 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, numDop);
		if(menu.PozY() == 1)
			menu.Write(button, passwd);
		if(button == ' ')
		{
			if(menu.PozY() == 2)
			{
				bool dop;
				dop = Data.NewAcount(atoi(numDop), passwd);
				if(dop)
					menu.MenuIn(4);
			}
			if(menu.PozY() == 3)
				menu.MenuIn(1);
		}
	}
	else if(menu.MenuOut() == 4)
	{
		if(button == ' ')
		{
			if(menu.PozY() == 0)
				menu.MenuIn(5);
			if(menu.PozY() == 1)
				menu.MenuIn(6);
			if(menu.PozY() == 2)
				menu.MenuIn(7);
			if(menu.PozY() == 3)
				menu.MenuIn(8);
			if(menu.PozY() == 4)
				menu.MenuIn(9);
			if(menu.PozY() == 5)
				menu.MenuIn(1);
		}
	}
	else if(menu.MenuOut() == 5)
	{
		if(button == ' ')
			menu.MenuIn(4);
	}
	else if(menu.MenuOut() == 6)
	{
		if(button == ' ')
		{
			if(menu.PozY() == 0 && menu.PozX() == 0)
				Data.ChangeCurr(atoi(numDop), 0, 1);
			if(menu.PozY() == 0 && menu.PozX() == 1)
				Data.ChangeCurr(atoi(numDop), 1, ERDol);
			if(menu.PozY() == 1 && menu.PozX() == 0)
				Data.ChangeCurr(atoi(numDop), 2, EREur);
			if(menu.PozY() == 1 && menu.PozX() == 1)
				Data.ChangeCurr(atoi(numDop), 3, ERRub);
			if(menu.PozY() == 2)
				menu.MenuIn(4);
		}
	}
	else if(menu.MenuOut() == 7)
	{
		if(menu.PozY() == 0 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, numDopSend);
		if(menu.PozY() == 1 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, dopMoney);
		if(button == ' ')
		{
			if(menu.PozY() == 2)
			{
				bool dop;
				dop = Data.Send(atoi(numDop), atoi(numDopSend), atoi(dopMoney)*Data.ExR(atoi(numDop)));
				if(dop)
					good = true;
			}
			if(menu.PozY() == 3)
				menu.MenuIn(4);
		}
	}
	else if(menu.MenuOut() == 8)
	{
		if(menu.PozY() == 0 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, dopMoney);
		if(button == ' ')
		{
			if(menu.PozY() == 1)
			{
				bool dop;
				dop = Data.Get(atoi(numDop), atoi(dopMoney));
				if(dop)
					good = true;
			}
			if(menu.PozY() == 2)
				menu.MenuIn(4);
		}
	}
	else if(menu.MenuOut() == 9)
	{
		if(menu.PozY() == 0 && (button > 47 && button < 58 || button == ' ' || button == 8))
			menu.Write(button, dopMoney);
		if(button == ' ')
		{
			if(menu.PozY() == 1)
			{
				bool dop;
				dop = Data.Give(atoi(numDop), atoi(dopMoney));
				if(dop)
					good = true;
			}
			if(menu.PozY() == 2)
				menu.MenuIn(4);
		}
	}
};

void Clear(char arr[])
{
	for(int i = 0; i < 20; i++)
		arr[i] = 0;
};