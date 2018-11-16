#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

template<typename T>
void In(T arr[10][10], int size);
template<typename T>
void Out(T arr[10][10], int size);
template<typename T>
void Dia(T arr[10][10], int size);
template<typename T>
void Max(T arr[10][10], int size);
template<typename T>
void Rnd(T arr[10][10], int size);
template<typename T>
void Clear(T arr[10][10], int size);

// 2 

bool Fib(int n, int num1 = -1, int num2 = 1)
{
	n-=2;
	num1+=num2;
	num2+=num1;
	cout << num1 << " " << num2 << " ";
	if(n <= 0)
		return 1;
	if(Fib(n, num1, num2))
		return 1;
};

int main()
{
	// 1 ----------------------

	/*const int size = 10;
	int arr[size][size];
	char arrC[size][size];
	char prg;
	bool end = false;
	while(!end)
	{
		system("cls");
		cout << "ARR::" << endl;
		cout << "In(i), Out(o), Dia(d), Max(m), Rnd(r)" << endl;
		cout <<	"Clear(c), Exit(e)" << endl;
		cin >> prg;
		switch(prg)
		{
		case 'i':
			In(arr, size);
			In(arrC, size);
			break;
		case 'o':
			Out(arr, size);
			Out(arrC, size);
			break;
		case 'd':
			Dia(arr, size);
			Dia(arrC, size);
			break;
		case 'm':
			Max(arr, size);
			Max(arrC, size);
			break;
		case 'r':
			Rnd(arr, size);
			Rnd(arrC, size);
			break;
		case 'c':
			Clear(arr, size);
			Clear(arrC, size);
			break;
		case 'e':
			end = true;
			cout << "Exit" << endl;
			break;
		default:
			cout << "Error" << endl;
		}
		system("pause");
	}*/

	// 2 ----------------------------
	int k;
	cout << "Number: ";
	cin >> k;
	Fib(k);
	system("pause");
}
template<typename T>
void In(T arr[10][10], int size)
{
	srand(time(0));
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			arr[i][j] = rand()%100;
	}
};
template<typename T>
void Out(T arr[10][10], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << setw(2) << i+1 << " |";
		for(int j = 0; j < size; j++)
			cout << setw(3) << arr[i][j];
		cout << endl;
	}
};
template<typename T>
void Dia(T arr[10][10], int size)
{
	for(int i = 0; i < size; i++)
		cout << setw(3) << arr[i][i];
	cout << endl;
};
template<typename T>
void Max(T arr[10][10], int size)
{
	int max = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(arr[j][i] > max)
				max = arr[j][i];
		}
	}
	cout << "Max: " << max << endl;
};
template<typename T>
void Rnd(T arr[10][10], int size)
{
	srand(time(0));
	int rnd1, rnd2;
	do{
		rnd1 = rand()%size;
		rnd2 = rand()%size;
	}while(rnd1 == rnd2);
	for(int i = 0; i < size; i++)
		swap(arr[rnd1][i], arr[rnd2][i]);
	cout << "Change: " << rnd1+1 << " " << rnd2+1 << endl;
};
template<typename T>
void Clear(T arr[10][10], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			arr[i][j] = 0;
	}
};
