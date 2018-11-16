#include<iostream>
#include<ctime>

using namespace std;

struct CLASS;
struct Student;
struct Teacher;
struct Date;

void Sename(char sen[])
{
	int rnd = rand()%10;
	switch(rnd)
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
		day = rand()%30+1;
		month = rand()%11+1;
		year = rand()%(2000-min)+min;
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
		int rnd = rand()%6+3;
		name[0] = 65+rand()%26;
		for(int i = 1; i < rnd; i++)
			name[i] = 97+rand()%26;
		name[rnd]='\0';
		rnd = rand()%6+3;
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
		int rnd = rand()%6+3;
		name[0] = 65+rand()%26;
		for(int i = 1; i < rnd; i++)
			name[i] = 97+rand()%26;
		name[rnd]='\0';
		rnd = rand()%6+3;
		Sename(sename);
		sumMark = 0;
		bool ex = true;
		rnd = rand()%10+2;
		for(int i = 0; i < 10; i++)
		{
			mark[i] = rand()%(12-rnd)+rnd;
			sumMark+=mark[i];
			if(mark[i] < 10)
				ex = false;
		}
		exc = ex;
		date.Rnd(1999);
		pil = rand()%2;
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
		int rnd = rand()%6+3;
		name[0] = 65+rand()%26;
		for(int i = 1; i < rnd; i++)
			name[i] = 97+rand()%26;
		name[rnd]='\0';
		sumMark = 0;
		for(int i = 0; i < 10; i++)
		{
			stud[i].Rnd();
			sumMark+=stud[i].sumMark;
		}
		teacher.Rnd();
	};
};

bool MaxDate(Date a, Date b)
{
	if(a.year == b.year)
	{
		if(a.month == b.month)
		{
			if(a.day == b.day)
				return 1;
			else
				return (a.day < b.day)? 0 : 1;
		}
		else
			return (a.month < b.month)? 0 : 1;
	}
	else
		return (a.year < b.year)? 0 : 1;
};

int main()
{
	srand(time(0));
	CLASS Class[3];
	for(int i = 0; i < 3; i++)
		Class[i].Rnd();
	Student *top1, *top2, *top3;
	int max1 = 0, max2 = 0, max3 = 0;
	bool dop1 = false, dop2 = false;
	cout << "Top 3: " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(Class[i].stud[j].sumMark > max1)
			{
				if(dop2)
				{
					top3 = top2;
					max3 = max2;
				}
				if(dop1)
				{
					top2 = top1;
					max2 = max1;
				}
				top1 = &Class[i].stud[j];
				max1 = Class[i].stud[j].sumMark;
				dop1 = true;
			}
			else if(Class[i].stud[j].sumMark > max2)
			{
				if(dop2)
				{
					top3 = top2;
					max3 = max2;
				}
				top2 = &Class[i].stud[j];
				max2 = Class[i].stud[j].sumMark;
				dop2 = true;
			}
			else if(Class[i].stud[j].sumMark > max3)
			{
				top3 = &Class[i].stud[j];
				max2 = Class[i].stud[j].sumMark;
			}
		}
	}
	cout << "1." << top1->name << " " << top1->sename << endl;
	cout << "2." << top2->name << " " << top2->sename << endl;
	cout << "3." << top3->name << " " << top3->sename << endl;
	cout << endl;

	bool find = false;
	cout << "Excellences: " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(Class[i].stud[j].exc == true)
			{
				cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << endl;
				find = true;
			}
		}
	}
	if(!find)
		cout << "Nothing" << endl;
	cout << endl;

	Teacher *top;
	int max = 0;
	for(int i = 0; i < 3; i++)
	{
		if(Class[i].sumMark > max)
		{
			top = &Class[i].teacher;
			max = Class[i].sumMark;
		}
	}
	cout << "The best teacher: " << top->name << " " << top->sename << endl;
	cout << endl;

	int in;
	max = 1000000;
	for(int i = 0; i < 3; i++)
	{
		if(Class[i].sumMark < max)
		{
			max = Class[i].sumMark;
			in = i;
		}
	}
	cout << "The worst class: " << Class[in].name << endl;
	cout << endl;

	cout << "Relatives: " << endl;
	bool rel[3][10] = {};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			for(int c = 0; c < 10; c++)
			{
				if(strcmp(Class[i].stud[j].sename, Class[i].stud[c].sename) == 0 && j != c && !rel[i][c] && !rel[i][j])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i].stud[c].name << " " << Class[i].stud[c].sename << endl;
					rel[i][c] = true;
					rel[i][j] = true;
				}
				if(strcmp(Class[i].stud[j].sename, Class[i+1].stud[c].sename) == 0 && i < 2 && !rel[i][j] && !rel[i+1][c])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i+1].stud[c].name << " " << Class[i+1].stud[c].sename << endl;
					rel[i+1][c] = true;
					rel[i][j] = true;
				}
				if(strcmp(Class[i].stud[j].sename, Class[i+2].stud[c].sename) == 0 && i < 1 && !rel[i][j] && !rel[i+2][c])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i+2].stud[c].name << " " << Class[i+2].stud[c].sename << endl;
					rel[i+2][c] = true;
					rel[i][j] = true;
				}
			}
		}
	}
	cout << endl;

	cout << "Children that born in same day: " << endl;
	bool sam[3][10] = {};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			for(int c = 0; c < 10; c++)
			{
				if(Class[i].stud[j].date.day == Class[i].stud[c].date.day && j != c && !sam[i][j] && !sam[i][c])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i].stud[c].name << " " << Class[i].stud[c].sename << endl;
					sam[i][c] = true;
					sam[i][j] = true;
				}
				if(Class[i].stud[j].date.day == Class[i+1].stud[c].date.day && i < 2 && !sam[i][j] && !sam[i+1][c])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i+1].stud[c].name << " " << Class[i+1].stud[c].sename << endl;
					sam[i+1][c] = true;
					sam[i][j] = true;
				}
				if(Class[i].stud[j].date.day == Class[i+2].stud[c].date.day && i < 1 && !sam[i][j] && !sam[i+2][c])
				{
					cout << Class[i].stud[j].name << " " << Class[i].stud[j].sename << " and ";
					cout << Class[i+2].stud[c].name << " " << Class[i+2].stud[c].sename << endl;
					sam[i+2][c] = true;
					sam[i][j] = true;
				}
			}
		}
	}
	cout << endl;

	Student *oldest;
	oldest = &Class[0].stud[0];
	for(int i = 0; i < 3; i++)
	{
		for(int j= 0; j < 10; j++)
		{
			if(MaxDate(oldest->date, Class[i].stud[j].date))
				oldest = &Class[i].stud[j];
		}
	}
	cout << "Oldest: " << oldest->name << " " << oldest->sename << endl;
	cout << endl;

	int count = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(Class[i].stud[j].sumMark/10 > 8.5)
				count++;
		}
	}
	cout << "Students that avarage more then 8.5: " << count << endl;
	cout << endl;

	max = 0;
	for(int i = 0; i < 3; i++)
	{
		count = 0;
		for(int j = 0; j < 10; j++)
		{
			if(Class[i].stud[j].pil)
				count++;
		}
		if(count > max)
		{
			max = count;
			in = i;
		}
	}
	cout << "Class where a lot of privileged persons: " << Class[in].name << endl;

	system("pause");
}