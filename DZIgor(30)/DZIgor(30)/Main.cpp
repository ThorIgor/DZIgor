#include<iostream>
#include<ctime>
#include<math.h>

using namespace std;

struct WORKER;
struct Date;
struct Person;

struct WORKER
{
	char name[15];
	char pos[15];
	int year;
	void NameIn()
	{
		cout << "Name: ";
		cin.getline(name, 14);
		name[strlen(name)+1]='\0';
	};

	void PosIn()
	{
		cout << "Pos: ";
		cin.getline(pos, 14);
		pos[strlen(pos)+1]='\0';
	};

	void YearIn()
	{
		cout << "Year: ";
		cin >> year;
	};
};

struct Date
{
	int day;
	int month;
	int year;
	void Rnd()
	{
		day = rand()%30+1;
		month = rand()%11+1;
		year = rand()%30+1968;
	};

	void small()
	{
		day = 1;
		month = 1;
		year = 100;
	};
};

struct Person
{
	char name[10];
	char sename[10];
	Date born;
	bool sex;
	Person *partner;
	void Rnd(bool s)
	{
		int rnd = rand()%6+3;
		name[0] = 65+rand()%26;
		for(int i = 1; i < rnd; i++)
			name[i] = 97+rand()%26;
		name[rnd]='\0';
		rnd = rand()%6+3;
		sename[0] = 65+rand()%26;
		for(int i = 1; i < rnd; i++)
			sename[i] = 97+rand()%26;
		sename[rnd]='\0';
		born.Rnd();
		sex = s;
	};

	void Partner()
	{
		
	};
};

bool Max(Date a, Date b)
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

void main()
{
	srand(time(0));
	// 1 ------------------------

	/*WORKER worker[3];
	cout << "Workers: " << endl;
	cout << "Names: " << endl;;
	for(int i = 0; i < 3; i++)
		worker[i].NameIn();
	cout << "Posadu: " << endl;
	for(int i = 0; i < 3; i++)
		worker[i].PosIn();
	cout << "Years: " << endl;
	for(int i = 0; i < 3; i++)
		worker[i].YearIn();
	int stag;
	bool find = false;
	cout << "Stag: ";
	cin >> stag;
	for(int i = 0; i < 3; i++)
	{
		if(2018 - worker[i].year > stag)
		{
			cout << worker[i].name << endl;
			find = true;
		}
	}
	if(!find)
		cout << "Nothing" << endl;*/

	//2 ---------------------------------

	Person man[3], woman[3];
	for(int i = 0; i < 3; i++)
	{
		man[i].Rnd(1);
		woman[i].Rnd(0);
		man[i].partner = &woman[i];
		woman[i].partner = &man[i];
	}
	Date min;
	int in;
	min.small();
	for(int i = 0; i < 3; i++)
	{
		if(!Max(min, woman[i].born))
		{
			min = woman[i].born;
			in = i;
		}
	}
	cout << "Man with the youngest wife: " << woman[in].partner->name << " " << woman[in].partner->sename << endl;
	cout << "She is " << 2018-woman[in].born.year << endl;
	int year1, year2;
	int m = 100;
	for(int i = 0; i < 3; i++)
	{
		year1 = man[i].born.year;
		year2 = man[i].partner->born.year;
		if(abs(year1-year2) < m)
		{
			m = 2018-year1-(2018-year2);
			in = i;
		}
	}
	cout << "Min riznuca in years: " << endl;
	cout << man[in].name << " " << man[in].sename << " and ";
	cout << man[in].partner->name << " " << man[in].partner->sename << endl;
	for(int i = 0; i < 3; i++)
	{
		if(Max(min, man[i].born))
		{
			min = man[i].born;
			in = i;
		}
	}
	cout << "Woman with the oldest husband: " << man[in].partner->name << " " << man[in].partner->sename << endl;
	cout << "He is " << 2018-man[in].born.year << endl;
	bool find = false;
	cout << "month == month: " << endl;
	for(int i = 0; i < 3; i++)
	{
		if(man[i].born.month == man[i].partner->born.month)
		{
			cout << man[i].name << " " << man[i].sename << " and ";
			cout << man[i].partner->name << " " << man[i].partner->sename << endl;
			find = true;
		}
	}
	if(!find)
		cout << "Nothihg" << endl;

	system("pause");
}