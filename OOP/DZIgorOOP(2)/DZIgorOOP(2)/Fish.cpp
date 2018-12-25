#include "Fish.h"

Fish::Fish(const int & h)
{
	x = rand() % sizeX;
	y = rand() % sizeY;
	health = h;
	liveFish++;
	lake[y][x] = '<';
}


void Fish::print()
{
	if (health <= 0)
		cout << "Dead" << endl;
	else
	{
		cout << "Coor: " << "(" << x << ", " << y << ")" << endl;
		cout << "Health: " << health << endl;
	}
}
void Fish::Move(const int &dir) //1 - down, 2 - right, 3 - up, 4 - left
{
	lake[y][x] = ' ';
	if (health > 0)
	{
		switch (dir)
		{
		case 1:(y < sizeY - 1) ? y++ : y;
			break;
		case 2:(x < sizeX - 1) ? x++ : x;
			break;
		case 3:(y > 0) ? y-- : y;
			break;
		case 4:(x > 0) ? x-- : x;
		}
		if (lake[x][y] == '*')
			health += 5;
		if (health > 100)
			health = 100;
		lake[y][x] = '<';
	}
}

int Fish::GetHealth()
{
	return health;
}


void Fish::NewLake(const int & sX, const int & sY)
{
	sizeX = sX;
	sizeY = sY;
	lake = new char*[sY];
	for (int i = 0; i < sY; i++)
		lake[i] = new char[sX];
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
			lake[i][j] = ' ';
	}
	
}
void Fish::DrawLake(const Fish fish[])
{
	for (int i = 0; i < sizeX+2; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < sizeY; i++)
	{
		cout << "#";
		for (int j = 0; j < sizeX; j++)
		{
			cout << lake[i][j];
		}
		cout << "#" << endl;
	}
	for (int i = 0; i < sizeX + 2; i++)
		cout << "#";
	cout << endl;
}
void Fish::Live(Fish *fish)
{
	for (int i = 0; i < liveFish; i++)
	{
		fish[i].health -= rand() % 3;
		fish[i].Move(rand() % 4 + 1);
	};
	int rnd = rand()%3;
	for (int i = 0; i < rnd; i++)
		lake[rand() % sizeY][rand() % sizeX] = '*';
}

int Fish::GetLive()
{
	return liveFish;
}

Fish::~Fish()
{
	for(int i = 0; i < sizeY; i++)
		delete[]lake[i];
	delete[]lake;
	liveFish--;
}
