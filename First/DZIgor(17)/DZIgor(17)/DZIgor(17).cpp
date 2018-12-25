#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	// 1 ----------------------------------------------

	/*const int sizeX = 10, sizeY = 10;
	int arr[sizeX][sizeY], sum = 0, max = 0, min = 100;
	cout << "  ";
	for(int i = 0; i < sizeX; i++)
		cout << setw(3) << i+1;
	cout << endl;
	cout << "  /";
	for(int i = 0; i < sizeX*3; i++)
		cout << "-";
	cout << endl;
	for(int i = 0; i < sizeY; i++)
	{
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%100;
			sum+=arr[j][i];
			if(arr[j][i] > max)
				max = arr[j][i];
			if(arr[j][j] < min)
				min = arr[j][i];
		}
		for(int j = 0; j < sizeX; j++)
			cout << setw(3) << arr[j][i];
		cout << endl;
	}
	cout << "Sum: " << sum << endl;
	cout << "Ser: " << sum/(sizeX*sizeY) << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;*/

	// 2 ------------------------------------------

	/*const int sizeX = 10, sizeY = 10;
	int arr[sizeX][sizeY], k;
	cout << "   ";
	for(int i = 0; i < sizeX; i++)
		cout << setw(4) << i+1;
	cout << endl;
	cout << setw(2) << "  /";
	for(int i = 0; i < sizeX*4; i++)
		cout << "-";
	cout << endl;
	for(int i = 0; i < sizeY; i++)
	{
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(4) << arr[j][i];
		}
		cout << endl;
	}
	cout << "K: ";
	cin >> k;
	for(int i = 0; i < sizeY; i++)
		arr[k-1][i]*=10;
	system("cls");
	cout << "   ";
	for(int i = 0; i < sizeX; i++)
		cout << setw(4) << i+1;
	cout << endl;
	cout << "  /";
	for(int i = 0; i < sizeX*4; i++)
		cout << "-";
	cout << endl;
	for(int i = 0; i < sizeY; i++)
	{
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
			cout << setw(4) << arr[j][i];
		cout << endl;
	}*/

	// 3 --------------------------------------
	const int sizeX = 10, sizeY = 10;
	int arr[sizeX][sizeY];
	for(int i = 0; i < sizeY; i++)
	{
		for(int j = 0; j < sizeX; j++)
			arr[j][i] = rand()%100;
	}
	cout << "   ";
	for(int i = 0; i < sizeX; i++)
		cout << setw(4) << i+1;
	cout << endl;
	cout << setw(2) << "  /";
	for(int i = 0; i < sizeX*4; i++)
		cout << "-";
	cout << endl;
	for(int i = 1; i < sizeY; i+=2)
	{
		cout << setw(2) << i+1 << "|";
		for(int j = 0; j < sizeX; j++)
			cout << setw(4) << arr[j][i];
		cout << endl;
	}

	system("pause");
}