#include<iostream>
#include<ctime>
#include<conio.h>
#include<iomanip>

using namespace std;

bool endPrg;

int menu;
int pozX, pozY;
int maxX, maxY;

char map[3][3];

bool hod;

int win;

void Def();
void Draw();
void InPut();
void Logic();

void Enable(int x, int y);
void Move(char button);

void Clear();

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

void Def()
{
	endPrg = false;
	menu = 1;
	pozX = 1;
	pozY = 1;
};

void Draw()
{
	if(menu == 1)
	{
		cout << "..::X vs 0::.." << endl;
		Enable(1, 1);
		cout << "New game" << endl;
		Enable(1, 2);
		cout << "Exit" << endl;
	}
	if(menu == 2)
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				if(pozX-1 == j && pozY-1 == i)
					cout << "X";
				else
					cout << map[i][j];
				if(j < 2)
					cout << "|";
			}
			if(i < 2)
			{
				cout << endl;
				for(int j = 0; j < 5; j++)
					cout << "-";
			}
			cout << endl;
		}
		cout << "Go back(g)" << endl;
	}
	if(menu == 3)
	{
		if(win == 0)
			cout << "Win x!!!" << endl;
		else if(win == 1)
			cout << "Nobody win :(" << endl;
		else if(win == 2)
			cout << "Win 0!!!" << endl;
		Enable(1, 1);
		cout << "Menu" << endl;
	}
};

void InPut()
{
	srand(time(0));
	char button;
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
					maxX = 3;
					maxY = 3;
					Clear();
					hod = true;
				}
				if(pozY == 2)
					endPrg = true;
			}
		}
		else if(menu == 2)
		{
			Move(button);
			if(button == 'g')
			{
				menu = 1;
				pozX = 1;
				pozY = 1;
			}
			if(button == ' ')
			{
				if(map[pozY-1][pozX-1] == ' ')
				{
					if(hod)
					{
						map[pozY-1][pozX-1] = 'x';
						hod = false;
					}
					else
					{
						map[pozY-1][pozX-1] = '0';
						hod = true;
					}
				}
			}
		}
		else if(menu == 3)
		{
			if(button == ' ')
				menu = 1;
		}
	}
};

void Logic()
{
	if(menu == 2)
	{
		for(int i = 0; i < 3; i++)
		{
			if(map[0][i] == map[1][i] && map[1][i] == map[2][i] && map[2][i] == 'x')
			{
				menu = 3;
				win = 0;
				pozX = 1;
				pozY = 1;
			}
			else if(map[0][i] == map[1][i] && map[1][i] == map[2][i] && map[2][i] == '0')
			{
				menu = 3;
				win = 2;
				pozX = 1;
				pozY = 1;
			}
			if(map[i][0] == map[i][1] && map[i][1] == map[i][2] && map[i][2] == 'x')
			{
				menu = 3;
				win = 0;
				pozX = 1;
				pozY = 1;
			}
			else if(map[i][0] == map[i][1] && map[i][1] == map[i][2] && map[i][2] == '0')
			{
				menu = 3;
				win = 2;
				pozX = 1;
				pozY = 1;
			}
		}
		if(map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[2][2] == 'x')
		{
			menu = 3;
			win = 0;
			pozX = 1;
			pozY = 1;
		}
		else if(map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[2][2] == '0')
		{
			menu = 3;
			win = 2;
			pozX = 1;
			pozY = 1;
		}
		if(map[2][0] == map[1][1] && map[1][1] == map[0][2] && map[0][2] == 'x')
		{
			menu = 3;
			win = 0;
			pozX = 1;
			pozY = 1;
		}
		else if(map[2][0] == map[1][1] && map[1][1] == map[0][2] && map[0][2] == '0')
		{
			menu = 3;
			win = 2;
			pozX = 1;
			pozY = 1;
		}
		bool dop = true;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				if(map[i][j] != ' ')
					dop = true;
				else
				{
					dop = false;
					break;
				}
			}
			if(!dop)
				break;
		}
		if(dop)
		{
			menu = 3;
			win = 1;
			pozX = 1;
			pozY = 1;
		}
	}
};

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

void Clear()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			map[j][i] = ' ';
		}
	}
}