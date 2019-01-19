#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Unit abstract
{
protected:
	int hp, dmg, dodge;
public:
	Unit(const int &h, const int &dm, const int &dod) : hp(h), dmg(dm), dodge(dod)
	{}
	virtual void Dodge(const int &dm)
	{
		if (rand() % 100 + 1 > dodge)
		{
			cout << typeid(*this).name()+6 << " wounded" << endl;
			hp -= dm;
		}
	}
	virtual int Dmg()
	{
		return dmg;
	}
	virtual bool Live()
	{
		return (hp > 0) ? 1 : 0;
	}
	virtual void print()
	{
		cout << typeid(*this).name()+6 << "(hp:" << hp << " dmg:" << dmg << " dodge:" << dodge << ")" << endl;
	}
};

class Swordsman : public Unit
{
public:
	Swordsman() : Unit(15, 5, 60)
	{}
	
};

class Archer : public Unit
{
public:
	Archer() : Unit(12, 4, 40)
	{}
};

class Mage : public Unit
{
public:
	Mage() : Unit(8, 10, 30)
	{}
};

class Team
{
	string name;
	vector<Unit*> team;
public:
	Team(const size_t &size = 3, const string &n = "Big Team") : name(n)
	{
		team.resize(size);
		for (int i = 0; i < size; i++)
		{
			int rnd = rand()%3;
			switch (rnd)
			{
			case 0:team[i] = new Swordsman();
				break;
			case 1:team[i] = new Archer();
				break;
			case 2:team[i] = new Mage();
			}
		}
	}

	bool Live()
	{
		for (int i = 0; i < team.size(); i++)
		{
			if (!team[i]->Live())
			{
				swap(team[i], team.back());
				team.pop_back();
			}
		}
		if (team.size() == 0)
			return 0;
		else
			return 1;
	};

	string &getName()
	{
		return name;
	}

	void print()
	{
		cout << "---------" << name << "----------" << endl;
		for (int i = 0; i < team.size(); i++)
			team[i]->print();
	}

	int size()
	{
		return team.size();
	}

	Unit& operator [](size_t in)
	{
		if (in < team.size())
			return *team[in];
	}
};

class Game
{
	Team first, second;
public:
	Game(const string &f, const int &s1, const string &s, const int &s2) : first(s1, f), second(s2, s)
	{}
	void Battle()
	{
		while (true)
		{
			if (!first.Live() && !second.Live())
			{
				system("cls");
				cout << "Draw" << endl;
				break;
			}
			if (!first.Live())
			{
				system("cls");
				cout << second.getName() << " win!!!" << endl;
				break;
			}
			if (!second.Live())
			{
				system("cls");
				cout << first.getName() << " win!!!" << endl;
				break;
			}
			system("cls");
			first.print();
			cout << "\t\tVS" << endl;
			second.print();
			cout << endl;
			cout << first.getName() << " atake:" << endl;
			for (int i = 0; i < first.size(); i++)
			{
				bool search = false;
				int in = 0;
				for(int j = 0; j < second.size(); j++)
				{ 
					if (typeid(first[i]) == typeid(second[j]))
					{
						search = true;
						in = j;
						break;
					}
				}
				if (search)
					second[in].Dodge(first[i].Dmg());
				else
				{
					in = rand() % second.size();
					second[in].Dodge(first[i].Dmg());
				}
			}
			cout << endl;
			cout << second.getName() << " atake:" << endl;
			for (int i = 0; i < second.size(); i++)
			{
				bool search = false;
				int in = 0;
				for (int j = 0; j < first.size(); j++)
				{
					if (typeid(second[i]) == typeid(first[j]))
					{
						search = true;
						in = j;
						break;
					}
				}
				if (search)
					first[in].Dodge(second[i].Dmg());
				else
				{
					in = rand() % first.size();
					first[in].Dodge(second[i].Dmg());
				}
			}
			system("pause");
		}
	}
};