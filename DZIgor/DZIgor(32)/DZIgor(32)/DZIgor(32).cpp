#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void Rnd(int *arr[], int sY, int sX)
{
	for(int i = 0; i < sY; i++)
	{
		for(int j = 0; j < sX; j++)
			arr[i][j] = rand()%100;
	}
};

void Out(int *arr[], int sY, int sX)
{
	for(int i = 0; i < sY; i++)
	{
		for(int j = 0; j < sX; j++)
			cout << setw(4) << arr[i][j];
		cout << endl;
	}
};

void main()
{
	srand(time(0));
	// 1 -----------

	/*int **arr, sY, sX;
	cout << "Height: ";
	cin >> sY;
	arr = new int *[sY];
	cout << "Width: ";
	cin >> sX;
	for(int i = 0; i < sY; i++)
		arr[i] = new int[sX];
	Rnd(arr, sY, sX);
	Out(arr, sY, sX);
	for(int i = 0; i < sY/2; i++)
	{
		for(int j = 0; j < sX; j++)
			swap(arr[i][j], arr[sY-i-1][j]);
	}
	cout << endl;
	Out(arr, sY, sX);*/

	// 2 ----------------

	/*int **arr, sY, sX;
	cout << "Height: ";
	cin >> sY;
	arr = new int *[sY];
	cout << "Width: ";
	cin >> sX;
	for(int i = 0; i < sY; i++)
		arr[i] = new int[sX];
	Rnd(arr, sY, sX);
	Out(arr, sY, sX);
	int min = 100, inY, inX;
	for(int i = 0; i < sY; i++)
	{
		for(int j = 0; j < sX; j++)
		{
			if(arr[i][j] < min)
			{
				min = arr[i][j];
				inY = i;
				inX = j;
			}
		}
	}

	for(int i = 0; i < sY; i++)
		swap(arr[i][0], arr[i][inY]);
	for(int i = 0; i < sX; i++)
		swap(arr[0][i], arr[inX][i]);
	cout << endl;
	Out(arr, sY, sX);*/

	// 3 ---------------------

	/*int **arr, size;
	cout << "Size: ";
	cin >> size;
	arr = new int *[size];
	for(int i = 0; i < size; i++)
		arr[i] = new int [size];
	Rnd(arr, size, size);
	Out(arr, size, size);
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < size; i++)
		sum1+=arr[i][i];
	for(int i = size-1; i >= 0; i--)
		sum2+=arr[size-i-1][i];
	cout << "Sum(\\): " << sum1 << endl;
	cout << "Sum(/): " << sum2 << endl;
	if(sum1 > sum2)
		cout << "Sum(\\) > Sum(/)" << endl;
	else if(sum1 == sum2)
		cout << "Sum(\\) = Sum(/)" << endl;
	else
		cout << "Sum(\\) < Sum(/)" << endl;*/

	// 4 ----------------------

	int **arr, size = 10;
	arr = new int *[size];
	for(int i = 0; i < size; i++)
		arr[i] = new int [size];
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			arr[i][j] = (i*10)+j+1;
	}
	Out(arr, size, size);

	system("pause");
}