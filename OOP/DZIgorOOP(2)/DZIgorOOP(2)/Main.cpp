#include<ctime>

#include"Student.h"
#include"Water.h"
#include"Fish.h"

using namespace std;

int Fish::liveFish = 0;
int Fish::sizeX = 0;
int Fish::sizeY = 0;
char **Fish::lake;

int Water::count = 0;

void main()
{
	srand(time(0));
	/*srand(time(0));
	Water wat("Baukal");
	wat.SetSize(20, 156, 1398);
	wat.SetType(River);
	wat.print();
	Student stud("Den");
	stud.SetSize(2);
	stud.SetMark(0, 11);
	stud.SetMark(1, 12);
	stud.print();
	system("pause");*/
	Fish::NewLake(10, 10);
	Fish *fish;
	fish = new Fish[5];
	while (true)
	{
		system("cls");
		Fish::DrawLake(fish);
		Fish::Live(fish);
		for (int i = 0; i < Fish::GetLive(); i++)
			fish[i].print();
		system("pause");
	}


}
