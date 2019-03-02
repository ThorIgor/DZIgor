#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Consol
{
	string history;
public:
	void Creat(const string &filename)
	{
		ofstream fout(filename);
		string dop;
		for(int i = 0; true; i++)
		{
			getline(cin, dop);
			if (dop == "exit")
				break;
			if (i > 0)
				fout << endl;
			fout << dop;
		}
	}

	void Print(const string &filename)
	{
		ifstream fin(filename, ios_base::in);
		string dop;
		if (!fin.good())
		{
			cout << "File not found" << endl;
			return;
		}
		while (!fin.eof())
		{
			getline(fin, dop);
			cout << dop << endl;
		}
	}

	void Copy(const string &filename1, const string &filename2)
	{
		ifstream fin(filename1, ios_base::in);
		ofstream fout(filename2);
		string dop;
		if (!fin.good())
		{
			cout << "File not found" << " " << fin.bad() << " " << fin.eof() << " " << fin.fail() << endl;
			return;
		}
		while (!fin.eof())
		{
			getline(fin, dop);
			fout << dop << endl;
		}
	}

	void Work()
	{
		string prg;
		bool end = false;
		while (!end)
		{
			string dop;
			bool en = false;
			cout << ">";
			getline(cin, prg);
			for (auto i : prg)
			{
				if (i == ' ')
					break;
				dop += i;
			}
			if (dop == "creat")
			{
				dop.clear();
				for (auto i : prg)
				{
					if (i == ' ')
					{
						en = true;
						continue;
					}
					if (en)
						dop += i;
				}
				Creat(dop);
			}
			else if (dop == "print")
			{
				dop.clear();
				for (auto i : prg)
				{
					if (i == ' ')
					{
						en = true;
						continue;
					}
					if (en)
						dop += i;
				}
				Print(dop);
			}
			else if (dop == "copy")
			{
				string copy;
				dop.clear();
				bool sen = false;
				for (auto i : prg)
				{
					cout << i;
					if (i == ' ' && !en)
					{
						en = true;
						continue;
					}
					if (i == ' ' && en)
					{
						sen = true;
						continue;
					}
					if (en && !sen)
						dop += i;
					if (sen)
						copy += i;
				}
				cout << " " << dop << " " << copy << endl;
				Copy(dop, copy);
			}
			else if (dop == "exit" || dop == "quit")
				end = true;
			else
				cout << "Error" << endl;
		}
	}
};
