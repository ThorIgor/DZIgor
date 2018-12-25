#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void Rnd(int arr[], int size);
void Out(int arr[], int size);
void OutPar(int arr[], int size);

void Swap(int &a, int &b)
{
	a += b;
	b = a - b;
	a -= b;
};

int main()
{
	/*const int size = 20;
	int arr[size];
	int *arrP = arr[2];
	Rnd(arr, size);
	Out(arr, size);
	OutPar(arr, size);*/

	const int size = 10;
	int a, b;
	int arr[size];
	cout << "Number: ";
	cin >> a;
	cout << "Number: ";
	cin >> b;
	Swap(a, b);
	cout << "Numbers: " << a << " " << b << endl;
	Rnd(arr, size);
	Out(arr, size);
	for(int i = 1; i < size; i+=2)
		Swap(arr[i-1], arr[i]);
	Out(arr, size);
	for(int i = 0; i < size/2; i++)
		Swap(arr[i], arr[size-i-1]);
	Out(arr, size);
	system("pause");
}

void Rnd(int arr[], int size)
{
	srand(time(0));
	for(int i = 0; i < size; i++)
		arr[i] = rand()%100;
};

void Out(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(i%5 == 0)
		{
			cout << endl;
			cout << setw(2) << i/5+1 << " |"; 
		}
		cout << setw(3) << arr[i];
	}
	cout << endl;
};

void OutPar(int arr[], int size)
{
	for(int i = 2; i < size; i+=2)
	{
		if(i%10 == 2)
		{
			cout << endl;
			cout << setw(2) << i/10+1 << " |"; 
		}
		cout << setw(3) << arr[i];
	}
	cout << endl;
};