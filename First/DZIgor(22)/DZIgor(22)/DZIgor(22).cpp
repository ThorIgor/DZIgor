#include<iostream>
#include<ctime>
#include<conio.h>
#include<iomanip>

using namespace std;

bool endPrg;

int menu;
int pozX, pozY;
int maxX, maxY;

//Calculator
double num[100] = {}, sum;
char sym[100] = {};
bool numOrSym;
int point;
int ZLpoint;

//Curr. conv.
float dol, eur, rub;
int currF, currT;
bool currCal;

//Conv. leng.
int lengF, lengT;
bool lengCal;

//Pr. road
float road, lKm, prL;
float prise;
bool prRoad;

void Def();
void Draw();
void InPut();
void Logic();

void Enable(int x, int y);
void Move(char button);

int Search(bool a);
void SymE(char a);

int main()
{
	Def();
	while(!endPrg)
	{
		system("cls");
		Draw();
		InPut();
 		Logic();
	}
}

//Main func. --------------------

void Def()
{
	srand(time(0));
	endPrg = false;
	menu = 1;
	pozX = 1;
	pozY = 1;
	dol = (rand()%100+200)/10.0;
	eur = (rand()%100+300)/10.0;
	rub = (rand()%10)/10.0;
};

void Draw()
{
	if(menu == 1)
	{
		cout << "..::Cool Programe::.." << endl;
		Enable(1, 1);
		cout << "Calculator" << endl;
		Enable(1, 2);
		cout << "Currency converter" << endl;
		Enable(1, 3);
		cout << "Converter lengths" << endl;
		Enable(1, 4);
		cout << "Prise for the road" << endl;
		Enable(1, 5);
		cout << "Exit" << endl;
	}
	if(menu == 2)
	{
		int dop = 0;
		while(true)
		{
			if(num[dop] == 0)
				break;
			if(num[dop] == 0)
				break;
			cout << num[dop];
			cout << sym[dop];
			dop++;
		}
		cout << endl;
		cout << "=" << sum;
		if(currCal)
		{
			cout << " > ";
			if(currF == 1)
			{
				switch(currT)
				{
				case 1:cout << sum;
					break;
				case 2:cout << sum*dol/eur;
					break;
				case 3:cout << sum*dol/rub;
					break;
				case 4:cout << sum*dol;
				}

			}
			if(currF == 2)
			{
				switch(currT)
				{
				case 1:cout << sum*eur/dol;
					break;
				case 2:cout << sum;
					break;
				case 3:cout << sum*eur/rub;
					break;
				case 4:cout << sum*eur;
				}
			}
			if(currF == 3)
			{
				switch(currT)
				{
				case 1:cout << sum*rub/dol;
					break;
				case 2:cout << sum*rub/eur;
					break;
				case 3:cout << sum;
					break;
				case 4:cout << sum*rub;
				}
			}
			if(currF == 4)
			{
				switch(currT)
				{
				case 1:cout << sum/dol;
					break;
				case 2:cout << sum/eur;
					break;
				case 3:cout << sum/rub;
					break;
				case 4:cout << sum;
				}
			}
		}
		else if(lengCal)
		{
			cout << " > ";
			if(lengF == 1)
			{
				switch(lengT)
				{
				case 1:cout << sum;
					break;
				case 2:cout << sum/10;
					break;
				case 3:cout << sum/100;
					break;
				case 4:cout << sum/100000;
				}

			}
			if(lengF == 2)
			{
				switch(lengT)
				{
				case 1:cout << sum*10;
					break;
				case 2:cout << sum;
					break;
				case 3:cout << sum/10;
					break;
				case 4:cout << sum/10000;
				}
			}
			if(lengF == 3)
			{
				switch(lengT)
				{
				case 1:cout << sum*100;
					break;
				case 2:cout << sum*10;
					break;
				case 3:cout << sum;
					break;
				case 4:cout << sum/1000;
				}
			}
			if(lengF == 4)
			{
				switch(lengT)
				{
				case 1:cout << sum*100000;
					break;
				case 2:cout << sum*10000;
					break;
				case 3:cout << sum*1000;
					break;
				case 4:cout << sum;
				}
			}
		}
		cout << endl;
		for(int i = 1; i < 5; i++)
		{
			for(int j = 1; j < 5; j++)
			{
				if(i < 4 && j < 4)
				{
					cout << setw(2);
					Enable(j, i);
					cout << (i-1)*3+j;
				}
				else
				{
					if(j == 4 && i < 4)
					{
						switch(i)
						{
						case 1:
							cout << setw(2);
							Enable(j, i);
							cout << "<";
							break;
						case 2:
							cout << setw(2);
							Enable(j, i);
							cout << "+";
							break;
						case 3:
							cout << setw(2);
							Enable(j, i);
							cout << "-";
						}
					}
					if(i == 4)
					{
						switch(j)
						{
						case 1:
							cout << setw(2);
							Enable(j, i);
							cout << ".";
							break;
						case 2:
							cout << setw(2);
							Enable(j, i);
							cout << "0";
							break;
						case 3:
							cout << setw(2);
							Enable(j, i);
							cout << "/";
							break;
						case 4:
							cout << setw(2);
							Enable(j, i);
							cout << "*";
						}
					}
				}
			}
			cout << endl;
		}
		if(prRoad)
		{
			cout << "Road: " << road << "km" << endl;;
			cout << "L/100km: " << lKm << "l" << endl;
			cout << "Prise for 1l: " << prL << "grn" << endl;
			cout << "Prise: " << prise << endl;
			if(prL == 0)
				cout << "Next(n)";
			if(road != 0)
				cout <<" Back(b)";
			cout << endl;
		}
		cout << "Go back(g)" << " Clear(c)" << endl;
	}
	if(menu == 3)
	{
		cout << "Dol: " << dol << " Eur: " << eur << " Rub: " << rub << endl;
		Enable(1, 1);
		cout << "Dol" << "\t";
		Enable(2, 1);
		cout << "Dol" << endl;
		Enable(1, 2);
		cout << "Eur" << "\t";
		Enable(2, 2);
		cout << "Eur" << endl;
		Enable(1, 3);
		cout << "Rub" << "\t";
		Enable(2, 3);
		cout << "Rub" << endl;
		Enable(1, 4);
		cout << "Grn" << "\t";
		Enable(2, 4);
		cout << "Grn" << endl;
		switch(currF)
		{
		case 0:cout << "None";
			break;
		case 1:cout << "Dol";
			break;
		case 2:cout << "Eur";
			break;
		case 3:cout << "Rub";
			break;
		case 4:cout << "Grn";
		}
		cout << " > ";
		switch(currT)
		{
		case 0:cout << "None";
			break;
		case 1:cout << "Dol";
			break;
		case 2:cout << "Eur";
			break;
		case 3:cout << "Rub";
			break;
		case 4:cout << "Grn";
		}
		cout << endl;
		Enable(1, 5);
		cout << "Next" << "	   ";
		Enable(2, 5);
		cout << "Go back" << endl;
	}
	if(menu == 4)
	{
		Enable(1, 1);
		cout << "Sm" << "\t";
		Enable(2, 1);
		cout << "Sm" << endl;
		Enable(1, 2);
		cout << "Dm" << "\t";
		Enable(2, 2);
		cout << "Dm" << endl;
		Enable(1, 3);
		cout << "M" << "\t ";
		Enable(2, 3);
		cout << "M" << endl;
		Enable(1, 4);
		cout << "Km" << "\t";
		Enable(2, 4);
		cout << "Km" << endl;
		switch(lengF)
		{
		case 0:cout << "None";
			break;
		case 1:cout << "Sm";
			break;
		case 2:cout << "Dm";
			break;
		case 3:cout << "M";
			break;
		case 4:cout << "Km";
		}
		cout << " > ";
		switch(lengT)
		{
		case 0:cout << "None";
			break;
		case 1:cout << "Sm";
			break;
		case 2:cout << "Dm";
			break;
		case 3:cout << "M";
			break;
		case 4:cout << "Km";
		}
		cout << endl;
		Enable(1, 5);
		cout << "Next" << "	 ";
		Enable(2, 5);
		cout << "Go back" << endl;
	}
};

void InPut()
{
	//Main:
	char button;
	//Calculator
	double dop = 1;
	
	if(_kbhit())
	{
		button = _getch();
		if(menu == 1)
		{
			Move(button);
			if(button == ' ')
			{
				if(pozY == 1)
				{
					menu = 2;
					numOrSym = true;
					point = 0;
					ZLpoint = 0;
					currCal = false;
					lengCal = false;
					prRoad = false;
				}
				if(pozY == 2)
				{
					menu = 3;
					currF = 0;
					currT = 0;
					pozX = 1;
					pozY = 1;
				}
				if(pozY == 3)
				{
					menu = 4;
					lengF = 0;
					lengT = 0;
					pozX = 1;
					pozY = 1;
				}
				if(pozY == 4)
				{
					menu = 2;
					prRoad = true;
					currCal = false;
					lengCal = false;
					pozX = 1;
					pozY = 1;
					numOrSym = true;
					point = 0;
					ZLpoint = 0;
					road = 0;
					lKm = 0;
					prL = 0;
				}
				if(pozY == maxY)
					endPrg = true;
			}
		}
		else if(menu == 2)
		{
			Move(button);
			if(button == ' ')
			{
				if(pozX < 4 && pozY < 4)
				{
					if(numOrSym)
					{
						num[Search(true)] = (pozY-1)*3+pozX;
						numOrSym = false;
						point = 0;
						ZLpoint = 0;
					}
					else
					{
						if(point > 0)
						{
							for(int i = 0; i <=ZLpoint; i++)
								dop*=0.1;
							num[Search(true)-1]+=(((double)pozY-1)*3+(double)pozX)*dop;
							ZLpoint++;
							point = 2;
						}
						else
						{
							num[Search(true)-1]*=10;
							num[Search(true)-1]+=(pozY-1)*3+pozX;
						}
					}
				}
				if(pozX == 4 && pozY == 1)
				{
					if(numOrSym)
					{
						sym[Search(false)-1] = 0;
						numOrSym = false;
					}
					else
					{
						if(point > 0)
						{
							num[Search(true)-1] = (int)num[Search(true)-1] / 10;
						}
						else
							num[Search(true)-1] = (int)num[Search(true)-1] / 10;
					}
				}
				if(!numOrSym)
				{
					if(pozX == 4 && pozY == 2)
						SymE('+');
					if(pozX == 4 && pozY == 3)
						SymE('-');
					if(pozX == 4 && pozY == 4)
						SymE('*');
					if(pozX == 3 && pozY == 4)
						SymE('/');
					if(pozX == 2 && pozY == 4)
					{
						if(point > 0)
							ZLpoint++;
						else
							num[Search(true)-1]*=10;
					}
					if(pozX == 1 && pozY == 4)
						point = 1;
				}
			}
			if(button == 'g')
			{
				if(currCal)
				{
					menu = 3;
					pozY = 1;
					pozX = 1;
					currCal = false;
				}
				else if(lengCal)
				{
					menu = 4;
					pozY = 1;
					pozX = 1;
					lengCal = false;
				}
				else
				{
					menu = 1;
					pozY = 1;
					pozX = 1;
				}
			}
			if(button == 'c')
			{
				for(int i = 0; i < 100; i++)
				{
					sym[i] = 0;
					num[i] = 0;

				}
			}
			if(prRoad)
			{
				if(button == 'n')
				{
					if(road == 0)
						road = sum;
					else if(lKm == 0)
						lKm = sum;
					else if(prL == 0)
						prL = sum;
				}
				if(button == 'b')
				{
					if(prL != 0)
						prL = 0;
					else if(lKm != 0)
						lKm = 0;
					else if(road != 0)
						road = 0;
				}
			}

		}
		else if(menu == 3)
		{
			Move(button);
			if(button == ' ')
			{
				if(pozX == 1 && pozY < 5)
					currF = pozY;
				if(pozX == 2 && pozY < 5)
					currT = pozY;
				if(pozX == 1 && pozY == 5 && currF != 0 && currT != 0)
				{
					menu = 2;
					currCal = true;
					lengCal = false;
					prRoad = false;
					numOrSym = true;
					point = 0;
					ZLpoint = 0;
					pozX = 1;
					pozY = 1;
				}
				if(pozX == 2 && pozY == 5)
				{
					menu = 1;
					pozX = 1;
					pozY = 1;
				}
			}
		}
		else if(menu == 4)
		{
			Move(button);
			if(button == ' ')
			{
				if(pozX == 1 && pozY < 5)
					lengF = pozY;
				if(pozX == 2 && pozY < 5)
					lengT = pozY;
				if(pozX == 1 && pozY == 5 && lengF != 0 && lengT != 0)
				{
					menu = 2;
					lengCal = true;
					currCal = false;
					prRoad = false;
					numOrSym = true;
					point = 0;
					ZLpoint = 0;
					pozX = 1;
					pozY = 1;
				}
				if(pozX == 2 && pozY == 5)
				{
					menu = 1;
					pozX = 1;
					pozY = 1;
				}
			}
		}
	}
};

void Logic()
{
	double n[100] = {};
	char s[100] = {};
	int dop;
	bool end = false;
	if(menu == 2)
	{
		if(num[0] == 0)
			numOrSym = true;
		for(int i = 0; i < 100; i++)
		{
			if(sym[i] == 0)
				break;
			if(sym[i] != 0 && num[i+1] == 0)
				numOrSym = true;
		}
		for(int i = 0; i < 100; i++)
		{
			if(num[i] == 0 && sym[i] == 0)
				break;
			n[i] = num[i];
			s[i] = sym[i];
		}
		sum = 0;
		while(!end)
		{
			for(int i = 0; i < 100; i++)
			{
				if(s[i] == 0)
				{
					end = true;
					break;
				}
				if(n[i] == 0)
				{
					end = true;
					break;
				}
				if(s[i] == '*' && n[i+1] != 0)
				{
					n[i]*=n[i+1];
					n[i+1] = 0;
					s[i] = 0;
					break;
				}
				if(s[i] == '/' && n[i+1] != 0)
				{
					n[i]/=n[i+1];
					n[i+1] = 0;
					s[i] = 0;
					break;
				}
			}
			for(int i = 0; i < 100; i++)
			{
				if(n[i+1] == 0 && num[i] == 0)
					break;
				else if(n[i] == 0)
					swap(n[i], n[i+1]);
				if(s[i] == 0)
					swap(s[i], s[i+1]);
			}
		}
		sum+=n[0];
		for(int i = 0; i < 100; i++)
		{
			if(s[i] == 0)
				break;
			if(n[i] == 0)
				break;
			if(s[i] == '+')
				sum+=n[i+1];
			if(s[i] == '-')
				sum-=n[i+1];
		}
		if(prRoad)
		{
			prise = road/100*lKm*prL;
		}
	}
};

// Dop. func. --------------------

void Enable(int x, int y)
{
	if(pozX == x && pozY == y)
		cout << ">";
	maxX = x;
	maxY = y;
};

void Move(char button)
{
	switch(button)
	{
	case 'w':if(pozY > 1)pozY--;
		break;
	case 's':if(pozY < maxY)pozY++;
		break;
	case 'd':if(pozX < maxX)pozX++;
		break;
	case 'a':if(pozX > 1)pozX--;
	}
};

int Search(bool a)
{
	int ser;
	if(a)
	{
		for(int i = 0; i < 100; i++)
		{
			if(num[i] == 0)
			{
				ser = i;
				break;
			}
		}
	}
	else
	{
		for(int i = 0; i < 100; i++)
		{
			if(sym[i] == 0)
			{
				ser = i;
				break;
			}
		}
	}
	return ser;
};

void SymE(char a)
{
	if(point != 1)
	{
		sym[Search(false)] = a;
		numOrSym = true;
	}
};

