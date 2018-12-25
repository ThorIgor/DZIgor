#include<iostream>

using namespace std;

class Fish
{
private:
	int x, y;
	int health;
	static char **lake;
	static int liveFish;
	//dop
	static int sizeX, sizeY;
public:
	Fish(const int &h = 100);
	
	void print();
	void Move(const int &dir);

	int GetHealth();

	static void NewLake(const int &sX, const int &sY);
	static void DrawLake(const Fish fish[]);
	static void Live(Fish *fish);

	static int GetLive();

	~Fish();
};
