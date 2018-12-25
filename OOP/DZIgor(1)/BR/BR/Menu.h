#include<iostream>

using namespace std;

class ClassConsolMenu
{
private:
	int menu;
	int pozX, pozY;
	int maxX, maxY;
	bool EndPrg;
	bool write;
public:
	ClassConsolMenu()
	{
		EndPrg = false;
		write = false;
		menu = 1;
		pozX = 0;
		pozY = 0;
	};

	void Enable(int y, int x)
	{
		if(pozX == x && pozY == y)
			cout << ">";
		maxX = x;
		maxY = y;
	};

	void Move(char button)
	{
		if(!write)
		{
			switch(button)
			{
			case 'w':if(pozY > 0)pozY--;
				break;
			case 's':if(pozY < maxY)pozY++;
				break;
			case 'd':if(pozX < maxX)pozX++;
				break;
			case 'a':if(pozX > 0)pozX--;
			}
		}
	};

	int MenuOut()
	{
		return menu;
	};

	void MenuIn(int m)
	{
		menu = m;
		pozX = 0;
		pozY = 0;
	};

	int PozX()
	{
		return pozX;
	};

	int PozY()
	{
		return pozY;
	};

	void MaxIn(int x, int y)
	{
		maxX = x;
		maxY = y;
	};

	bool EndPrgOut()
	{
		return !EndPrg;
	};

	void EndPrgIn()
	{
		EndPrg = !EndPrg;
	};

	void Write(char button, char word[])
	{
		if (button == 8 && strlen(word) > 0 && write)
		{
			word[strlen(word)-1] = '\0';
		}
		else if(button == ' ')
			write = !write;
		else if(write)
		{
			word[strlen(word)] = button;
			word[strlen(word)] = '\0';
		}
	};
};