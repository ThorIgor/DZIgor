#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	// 1 -----------------------------

	/*const int size = 10;
	int num[size];
	num[0] = 2;
	cout << num[0] << " ";
	for(int i = 1; i < size; i++)
	{
		num[i] = num[i-1] * 2;
		cout << num[i] << " ";
	}
	cout << endl;*/

	// 2 ----------------------------

	/*int num[7];
	for(int i = 0; i < 7; i++)
	{
		num[i] = rand()%63-12;
		cout << num[i] << " ";
	}
	cout << endl;*/

	// 3 -----------------------------------------

	/*int tem[7], max = -10, min = 30;
	for(int i = 0; i < 7; i++)
	{
		tem[i] = rand()%40-10;
		if(tem[i] > max)
			max = tem[i];
		if(tem[i] < min)
			min = tem[i];
	}
	cout << "Max: " << max << "\tMin: " << min << endl;*/

	// 4 --------------------------------------------

	/*long arr[7], sum = 0;
	for(int i = 0; i < 7; i++)
	{
		arr[i] = rand()%100;
		cout << arr[i] << " ";
		if(arr[i]%2 == 0)
			sum+=arr[i];
	}
	cout << endl;
	cout << "Sum: " << sum << endl;*/

	// 5 ---------------------------------------------

	const int n = 10;
	int a[n], sum = 0;
	for(int i = 0; i < n; i++)
	{
		cout << "Number: ";
		cin >> a[i];
		sum+=a[i];
	}
	cout << "Ser: " << (float)sum/n << endl;

	system("pause");
}