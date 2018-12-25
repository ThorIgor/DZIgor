#include<iostream>
#include<ctime>

bool MaxDate(Date a, Date b);

void Sename(char sen[])
{
	int rnd = rand() % 10;
	switch (rnd)
	{
	case 0:strcpy(sen, "Golovach");
		break;
	case 1:strcpy(sen, "Thoruk");
		break;
	case 2:strcpy(sen, "Zavadskiy");
		break;
	case 3:strcpy(sen, "Guk");
		break;
	case 4:strcpy(sen, "Gor");
		break;
	case 5:strcpy(sen, "Dokurov");
		break;
	case 6:strcpy(sen, "Baukov");
		break;
	case 7:strcpy(sen, "Koval");
		break;
	case 8:strcpy(sen, "Drobotuk");
		break;
	case 9:strcpy(sen, "Dubov");
	}
};

struct Date
{
	int day;
	int month;
	int year;

	void Rnd(int min)
	{
		day = rand() % 30 + 1;
		month = rand() % 11 + 1;
		year = rand() % (2000 - min) + min;
	};

	void Small()
	{
		day = 1;
		month = 1;
		year = 2018;
	}
};

struct Teacher
{
	char name[10];
	char sename[10];
	Date date;

	void Rnd()
	{
		int rnd = rand() % 6 + 3;
		name[0] = 65 + rand() % 26;
		for (int i = 1; i < rnd; i++)
			name[i] = 97 + rand() % 26;
		name[rnd] = '\0';
		rnd = rand() % 6 + 3;
		Sename(sename);
		date.Rnd(1960);
	};
};

struct Student
{
	char name[10];
	char sename[10];
	int mark[10];
	int sumMark;
	Date date;
	bool pil;
	bool exc;

	void Rnd()
	{
		int rnd = rand() % 6 + 3;
		name[0] = 65 + rand() % 26;
		for (int i = 1; i < rnd; i++)
			name[i] = 97 + rand() % 26;
		name[rnd] = '\0';
		rnd = rand() % 6 + 3;
		Sename(sename);
		sumMark = 0;
		bool ex = true;
		rnd = rand() % 10 + 2;
		for (int i = 0; i < 10; i++)
		{
			mark[i] = rand() % (12 - rnd) + rnd;
			sumMark += mark[i];
			if (mark[i] < 10)
				ex = false;
		}
		exc = ex;
		date.Rnd(1999);
		pil = rand() % 2;
	};
};

struct CLASS
{
	char name[10];
	Student stud[10];
	Teacher teacher;
	int sumMark;

	void Rnd()
	{
		int rnd = rand() % 6 + 3;
		name[0] = 65 + rand() % 26;
		for (int i = 1; i < rnd; i++)
			name[i] = 97 + rand() % 26;
		name[rnd] = '\0';
		sumMark = 0;
		for (int i = 0; i < 10; i++)
		{
			stud[i].Rnd();
			sumMark += stud[i].sumMark;
		}
		teacher.Rnd();
	};
};
