#include<iostream>
#include<ctime>

using namespace std;

void StringIn(char string[], int size);

void main()
{
	// 1 ---------------------

	/*
	char string[50], zn = '+';
	int sum = 0,  num = 0;
	bool snum = true, find = true;
	StringIn(string, 50);
	for(int i = 0; i < strlen(string); i++)
	{
		if(string[i] > 47 && string[i] < 58)
		{
			if(snum)
			{
				num+=string[i]-'0';
				snum = false;
			}
			else
			{
				num*=10;
				num+=string[i]-'0';
			}
		}
		else if(string[i] == '+' || string[i] =='-')
		{
			if(zn == '+')
				sum+=num;
			else
				sum-=num;
			num = 0;
			zn = string[i];
			snum = true;
		}
		else
		{
			find = false;
			break;
		}
	}
	if(zn == '+')
		sum+=num;
	else
		sum-=num;
	if(find)
		cout << "=" << sum << endl; 
	else
		cout << "Error" << endl;
	*/

	// 2 ---------------------

	/*
	char string[100];
	StringIn(string, 100);
	for(int i = 0; i < strlen(string); i++)
	{
		if(string[i] == '+')
		{
			for(int j = strlen(string); j > i; j--)
				string[j+2] = string[j];
			string[i+1] = '+';
			string[i+2] = '+';
			i+=2;
		}
	}
	cout << string << endl;
	*/

	// 3 ---------------------

	/*
	char string[100];
	int poz;
	StringIn(string, 100);
	for(int i = 0; i < strlen(string); i++)
	{ 
		if(string[i] == '.')
			poz = i;
	}
	cout << "Last .: " << poz << endl;
	*/

	// 4 ---------------------

	/**/
	char string[10][50];
	int sum = 0;
	for(int i = 0; i < 10; i++)
	{
		StringIn(string[i], 50);
		for(int j = 0; j < strlen(string[i]); j++)
		{
			if((j == 0 || string[i][j-1] == ' ') && (string[i][j] == 'a' || string[i][j] == 'A'))
				sum++;
		}
	}
	cout << "Sum: " << sum << endl;

	system("pause");
}

void StringIn(char string[], int size)
{
	cin.getline(string, size);
	string[strlen(string)+1] = '\0';
};