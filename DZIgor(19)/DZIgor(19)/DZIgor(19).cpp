#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	// 1 ---------------------------------------
	/*const int SizeX = 10, SizeY = 50;
	int arr[SizeY][SizeX];
	int par, parIn = 0;
	for(int i = 0; i < SizeY; i++)
	{
		par = 0;
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[i][j] = rand()%10;
			cout << setw(2) << arr[i][j];
			if(arr[i][j]%2 == 0)
				par++;
		}
		if(par == SizeX)
			parIn = i+1;
		cout << endl;
	}
	cout << "Find: " << parIn << endl;*/

	// 2 --------------------------------------------
	/*const int SizeX = 5, SizeY = 10;
	int arr[SizeY][SizeX], sp[SizeY];
	int dop, use = 0;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[i][j] = rand()%100;
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY; i++)
	{
		dop = 0;
		for(int j = 0; j < SizeX; j++)
		{
			if(arr[i][j] >= arr[i][j+1] && j < SizeX-1)
				dop++;
		}
		if(dop == SizeX-1)
		{
			sp[use] = i+1;
			use++;
		}
	}
	cout << "Find: ";
	for(int i = 0; i < use; i++)
		cout << setw(3) << sp[i];
	if(use == 0)
		cout << "None";
	cout << endl;*/

	// 3 ----------------------------
	const int SizeX = 10, SizeY = 10;
	int arr[SizeY][SizeX];
	int min = 1000, minIn, max = 0, maxIn;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[i][j] = rand()%1000;
			cout << setw(4) << arr[i][j];
			if(arr[i][j] < min)
			{
				min = arr[i][j];
				minIn = i;
			}
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				maxIn = i;
			}
		}
		cout << endl;
	}
	for(int i = 0; i < SizeX; i++)
		swap(arr[maxIn][i], arr[minIn][i]);
	cout << "New: " << endl;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
			cout << setw(4) << arr[i][j];
		cout << endl;
	}
	system("pause");
}