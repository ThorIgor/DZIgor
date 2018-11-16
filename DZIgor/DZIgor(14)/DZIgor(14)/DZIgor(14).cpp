#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	// 1 ------------------------------

	/*const int size = 10;
	int arr[size];
	for(int i = 0;i < size; i++)
	{
		system("cls");
		cout << "Number: ";
		cin >> arr[i];
	}
	for(int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			if(arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	system("cls");
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	// 2 ----------------------------------

	/*const int size = 50;
	char arr[size];
	for(int i = 0; i < size; i++)
	{
		while(!((arr[i] > 64 && arr[i] < 91) || (arr[i] > 96 && arr[i] < 123)))
			arr[i] = rand()%123;
	}
	for(int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			if(arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl*/

	// 3 ------------------------------------------

	/*const int size = 10;
	int arr[size], dop[size], buble = 0, stone = 0, in;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
		dop[i] = arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int i = 0; true; i++)
	{
		in = 0;
		for(int j = 1; j < size; j++)
		{
			if(arr[j-1] > arr[j])
				swap(arr[j-1], arr[j]);
		}
		for(int j = 1; j < size; j++)
		{
			if(arr[j-1] <= arr[j])
				in++;
		}
		buble++;
		if(in == size-1)
			break;
	}
	cout << "Buble: " << buble << endl;
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	for(int i = 0; true; i++)
	{
		in = 0;
		for(int j = 1; j < size; j++)
		{
			if(dop[j-1] < dop[j])
				swap(dop[j-1], dop[j]);
		}
		for(int j = 1; j < size; j++)
		{
			if(dop[j-1] >= dop[j])
				in++;
		}
		stone++;
		if(in == size-1)
			break;
	}
	cout << "Stone: " << stone << endl;
	for(int i = 0; i < size; i++)
		cout << dop[i] << " ";
	cout << endl;*/

	// 4 ------------------------------------

	const int size = 10;
	int arr[size], max, min, in;
	char prog;
	bool end = true;
	for(int  i = 0; i < size; i++)
		arr[i] = rand()%10;
	while(end)
	{
		system("cls");
		cout << "Your numbers: " << endl;
		for(int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
		cout << "New random numbers(r)" << endl;
		cout << "Write new numbers(w)" << endl;
		cout << "Buble: growth(b), decrease(s)" << endl;
		cout << "Vstavka: growth(g), decrease(d)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prog: ";
		cin >> prog;
		switch(prog)
		{
		case 'r':
			system("cls");
			cout << "Max: ";
			cin >> max;
			cout << "Min: ";
			cin >> min;
			for(int i = 0; i < size; i++)
				arr[i] = rand()%(max-min)+min;
			break;
		case 'w':
			for(int i = 0; i < size; i++)
			{
				system("cls");
				cout << "Number: ";
				cin >> arr[i];
			}
			break;
		case 'b':
			for(int i = 0; true; i++)
			{
				in = 0;
				for(int j = 1; j < size; j++)
				{
					if(arr[j-1] > arr[j])
						swap(arr[j-1], arr[j]);
				}
				for(int j = 1; j < size; j++)
				{
					if(arr[j-1] <= arr[j])
						in++;
				}
				if(in == size-1)
					break;
			}
			break;
		case 's':
			for(int i = 0; true; i++)
			{
				in = 0;
				for(int j = 1; j < size; j++)
				{
					if(arr[j-1] < arr[j])
						swap(arr[j-1], arr[j]);
				}
				for(int j = 1; j < size; j++)
				{
					if(arr[j-1] >= arr[j])
						in++;
				}
				if(in == size-1)
					break;
			}
			break;
		case 'g':
			for(int i = 0; i < size; i++)
			{
				for(int j = i; j < size; j++)
				{
					if(arr[i] > arr[j])
						swap(arr[i], arr[j]);
				}
			}
			break;
		case 'd':
			for(int i = 0; i < size; i++)
			{
				for(int j = i; j < size; j++)
				{
					if(arr[i] < arr[j])
						swap(arr[i], arr[j]);
				}
			}
			break;
		case 'e':
			system("cls");
			cout << "Exit" << endl;
			end = false;
			break;
		default:
			system("cls");
			cout << "Error" << endl;
			system("pause");
		}
	}

	system("pause");
}