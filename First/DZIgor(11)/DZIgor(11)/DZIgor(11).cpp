#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));

	// 1 ------------------------------------

	/*const int size = 10;
	int arr[size], n, ser = 0, x = 0;
	cout << "Number: ";
	cin >> n;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%100;
		if(arr[i] > n)
		{
			ser+=arr[i];
			x++;
		}
	}
	cout << "Ser: " << (float)ser/x << endl;*/

	// 2 ------------------------------------

	/*const int size = 10;
	int arr[10], min = 1000;
	for(int i = 0;  i < size; i++)
	{
		arr[i] = rand()%1000;
		if(arr[i] < min)
			min = arr[i];
	}
	cout << "Min: " << min << endl;*/

	// 3 ------------------------------------

	/*const int size = 100;
	int arr[size], Max, Min;
	int max = 0, min = 1000, n = 0;
	float ser = 0;
	cout << "Max: ";
	cin >> Max;
	cout << "Min: ";
	cin >> Min;
	if(Max <= Min)
		cout << "Error" << endl;
	else
	{
		for(int i = 0; i < size; i++)
		{
			arr[i] = rand()%1000;
			if(arr[i] >= Min && arr[i] <= Max)
			{
				ser+=arr[i];
				n++;
				if(arr[i] > max)
					max = arr[i];
				if(arr[i] < min)
					min = arr[i];
			}
		}
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;
		cout << "Number: " << n << endl;
		cout << "Ser: " << ser/n << endl;
	}*/

	// 4 ----------------------------------------

	const int size = 100;
	int arr[size], inMax = 0, inPrmax = 0;
	int max = 0, prmax = 0;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%1000;
		cout << i << ") " << arr[i] << " ";
		if(arr[i] >= max)
		{
			prmax = max;
			max = arr[i];
			inPrmax = inMax;
			inMax = i;
		}
		else if(arr[i] >= prmax)
		{
			prmax = arr[i];
			inPrmax = i;
		}
	}
	cout << endl;
	cout << "Max sum: " << inMax << " " << inPrmax << endl;
	cout << "Sum: " << max+prmax << endl;

	system("pause");
}