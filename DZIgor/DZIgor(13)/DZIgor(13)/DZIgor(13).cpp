#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));

	// 1 -------------------------

	/*const int size = 10;
	int arr1[size], arr2[size], in1, in2;
	bool end = false;
	for(int i = 0; i < size; i++)
	{
		arr1[i] = rand()%size;
		arr2[i] = rand()%size;
	}
	for(int j = 0; !end; j++)
	{
		for(int i = 1; i < size; i++)
		{
			if(arr1[i - 1] > arr1[i])
				swap(arr1[i-1], arr1[i]);
		}
		for(int i = 1; i < size; i++)
		{
			end = false;
			if(arr1[i-1] <= arr1[i])
				end = true;
			if(end == false)
				break;
		}
		in1 = j;
	}
	end = false;
	for(int j = 0; !end; j++)
	{
		for(int i = 1; i < size; i++)
		{
			if(arr2[i-1] > arr2[i])
				swap(arr2[i-1], arr2[i]);
		}
		for(int i = 1; i < size; i++)
		{
			end = false;
			if(arr2[i-1] <= arr2[i])
				end = true;
			if(end == false)
				break;
		}
		in2 = j;
	}
	cout << "Arr1: " << in1 << endl;
	for(int i = 0; i < size; i++)
		cout << arr1[i] << " ";
	cout << endl;
	cout << "Arr2: " << in2 << endl;
	for(int i = 0; i < size; i++)
		cout << arr2[i] << " ";
	cout << endl;
	if(in1 < in2)
		cout << "Arr1 is faster" << endl;
	else if(in1 > in2)
		cout << "Arr2 is faster" << endl;
	else if(in1 == in2)
		cout << "They are in same time" << endl;*/

	// 2 -----------------------------------

	const int size = 1000;
	char sym[size], symbol;
	for(int i = 0; i < size; i++)
	{
		sym[i] = rand()%size;
	}
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(sym[i] < sym[j])
				swap(sym[i], sym[j]);
		}
	}
	for(int i = 0; i < size; i++)
	{
		cout << sym[i] << " ";
	}
	cout << endl;
	cout << "Symbol: ";
	cin >> symbol;
	cout << "Idex: ";
	for(int i = 0; i < size; i++)
	{
		if(sym[i] == symbol)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	system("pause");
}