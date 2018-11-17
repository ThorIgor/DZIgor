#include<iostream>
#include<fstream>

using namespace std;

void main()
{
	// 1 -----------------------
	/*
	char word[20];
	ifstream fin("DFile.txt");
	ofstream fout("NewFile.txt");
	while(true)
	{
		if(fin.is_open() && !fin.eof())
		{
			fin >> word;
			if(strlen(word) >= 7)
				fout << word << " ";
		}
		else
			break;
	}
	fin.close();
	fout.close();
	*/

	// 2 -----------------------
	/*
	char str[100];
	ifstream fin("DFile.txt");
	ofstream fout("NewFile.txt");
	while(true)
	{
		if(fin.is_open() && !fin.eof())
		{
			fin.getline(str, 100);
			fout << str << endl;
		}
		else
			break;
	}
	fin.close();
	fout.close();
	*/

	// 3 ----------------------
	/*
	char word[20], sym;
	int count = 0;
	ifstream fin("DFile.txt");
	cout << "Sym: ";
	cin >> sym;
	while(true)
	{
		if(fin.is_open() && !fin.eof())
		{
			fin >> word;
			if(word[0] == sym)
				count++;
		}
		else
			break;
	}
	cout << "Words: " << count << endl;
	*/

	// 4 ---------------------
	/*
	char str[100];
	int count = 0;
	ifstream fin("DFile.txt");
	while(true)
	{
		if(fin.is_open() && !fin.eof())
		{
			fin.getline(str, 100);
			count++;
		}
		else
			break;
	}
	cout << "Strings: " << count << endl;
	*/

	// 5 ----------------------------

	char word[20];
	int count = 0;
	ifstream fin("DFile.txt");
	while(true)
	{
		if(fin.is_open() && !fin.eof())
		{
			fin >> word;
			count+=strlen(word);
		}
		else
			break;
	}
	cout << "Symbols: " << count << endl;

	system("pause");
}