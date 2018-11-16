#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	// 1 -----------------------------

	/*const int sizeX = 5, sizeY = 5;
	int arr[sizeX][sizeY], max[sizeY] = {}, prmax[sizeY] = {};
	for(int i = 0; i < sizeY; i++)
	{
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%50;
			if(arr[j][i] > max[i])
			{
				prmax[i] = max[i];
				max[i] = arr[j][i];
			}
			else if(arr[j][i] > prmax[i])
				prmax[i] = arr[j][i];
		}
	}
	for(int i = 0; i < sizeY; i++)
	{
		cout << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			cout << setw(3) << arr[j][i];
		}
		cout << " Max: " << max[i] << " Pr. max: " << prmax[i] << endl;
	}*/

	// 2 ----------------------------------------------

	/*const int sizeX = 3, sizeY = 5;
	int arr[sizeX][sizeY], dop, zr = 0;
	for(int i = 0; i < sizeY; i++)
	{
		dop = 0;
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%50;
			cout << setw(3) << arr[j][i];
		}
		for(int j = 1; j < sizeX; j++)
		{
			if(arr[j-1][i] < arr[j][i])
				dop++;
		}
		if(dop == sizeX-1)
			zr++;
		cout << endl;
	}
	cout << zr << " radiv po zrostanu" << endl;*/

	// 3 --------------------------------------------

	/*const int sizeX = 6, sizeY = 3;
	int arr[sizeX][sizeY], dop, sp = 0;
	for(int i = 0; i < sizeY; i++)
	{
		dop = 0;
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		for(int j = 1; j < sizeY; j++)
		{
			if(arr[i][j-1] > arr[i][j])
				dop++;
		}
		if(dop == sizeY-1)
			sp++;
		cout << endl;
	}
	cout << sp << " stovpciv po spadanu" << endl;*/

	// 4 ---------------------------------------------

	/*const int sizeX = 5, sizeY = 5;
	int arr[sizeX][sizeY], max, min, minIn, maxIn;
	cout << "Befor: " << endl;
	for(int i = 0; i < sizeY; i++)
	{
		cout << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < sizeY; i++)
	{
		max = 0;
		min = 100;
		for(int j = 0; j < sizeX; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				maxIn = j;
			}
			if(arr[i][j] < min)
			{
				min = arr[i][j];
				minIn = j;
			}
		}
		swap(arr[i][maxIn], arr[i][minIn]);
	}
	cout << "After: " << endl;
	for(int i = 0; i < sizeY; i++)
	{
		cout << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
			cout << setw(3) << arr[j][i];
		cout << endl;
	}*/

	// 5 ---------------------------------------------

	const int sizeX = 5, sizeY = 5;
	int arr[sizeX][sizeY] = {};
	cout << "Befor: " << endl;
	for(int i = 0; i < sizeY; i++)
	{
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < sizeY; i++)
	{
		for(int j = 0; j < sizeX/2; j++)
		{
			swap(arr[j][i], arr[sizeX-j-1][i]);
		}
	}
	cout << "After: " << endl;
	for(int i = 0; i < sizeY; i++)
	{
		for(int j = 0; j < sizeX; j++)
		{
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}


	system("pause");
}