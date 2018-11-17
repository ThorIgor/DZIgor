#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void Rnd(int arr[], int size, int min, int max);
void Out(int arr[], int size);
int abs(int a);
void Often(int arr[], int size);
void Min0(int arr[], int size);
void Sort(int arr[], int size, bool up);

void main()
{
	// 1 ----------------------------------

	/*const int size = 30;
	int arr[size];
	int *mas = arr;
	Rnd(mas, size, -20, 20);
	Out(mas, size);
	cout << endl;
	Often(mas, size);
	system("pause");*/

	// 2 ----------------------------------

	/*const int size = 20;
	int arr[size], min, max;
	int *mas = arr;
	cout << "Min: ";
	cin >> min;
	cout << "Max: ";
	cin >> max;
	Rnd(mas, size, min, max);
	Out(mas, size);
	Min0(mas, size);
	Out(mas, size);
	system("pause");*/

	// 3 ----------------------------------

	const int size = 20;
	int arr[size];
	int *mas = arr;
	bool up;
	cout << "Sort up to down(1)" << endl;
	cout << "Sort down to up(0)" << endl;
	cin >> up;
	Rnd(mas, size, -90, 90);
	Out(mas, size);
	Sort(mas, size, up);
	Out(mas, size);
	system("pause");
}

void Rnd(int arr[], int size, int min, int max)
{
	srand(time(0));
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%(max-min)+min;
	}
};

void Out(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(i%5 == 0)
		{
			cout << endl;
			cout << setw(2) << i/5+1 << "| ";
		}
		cout << setw(3) << arr[i];
	}
	cout << endl;
};

int abs(int a)
{
	(a > 0)? a*=1 : a*=-1;
	return a;
};

void Often(int arr[], int size)
{
	int maxIn, max = 0, often;
	for(int i = 0; i < size; i++)
	{
		maxIn = 0;
		for(int j = 0; j < size; j++)
		{
			if(abs(arr[i]) == abs(arr[j]))
			{
				maxIn++;
				
			}
		}
		if(maxIn > max)
		{
			max = maxIn;
			often = abs(arr[i]);
		}
	}
	cout << endl;
	cout << "The most often is " << often << endl;
	cout << often << ": " << max << endl;
}; 

void Min0(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] < 0)
			arr[i] = 0;
	}
};

void Sort(int arr[], int size, bool up)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(up)
			{
				if(arr[i] > arr[j])
					swap(arr[i], arr[j]);
			}
			else
			{
				if(arr[i] < arr[j])
					swap(arr[i], arr[j]);
			}
		}
	}
};