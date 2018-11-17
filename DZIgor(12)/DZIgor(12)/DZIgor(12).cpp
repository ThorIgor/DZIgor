#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	// 1 --------------------------------

	/*const int size = 50;
	int m[size], k, pr = 0;
	cout << "Number: ";
	cin >> k;
	for(int i = 0; i < size; i++)
	{
		m[i] = rand()%100;
		if(m[i] == k)
		{
			cout << "Poz: " << i << endl;
			pr++;
		}
	}
	if(pr < 1)
			cout << "Nothing" << endl;*/

	// 2 --------------------------------

	/*char day[7][10] = {"Monday", "Tusday", "Wednesday", "Thursday", "Friday", "Suterday", "Sunday"};
	int num;
	cout << "Day: ";
	cin >> num;
	if(num > 0 && num < 8)
		cout << day[num-1] << endl;
	else
		cout << "Error" << endl;*/

	// 3 --------------------------------

	/*const int size = 11;
	int arr[size];
	for(int i = 0; i < size; i++)
	{
		arr[i] = (size/2)-i;
		if(arr[i] < 0)
			arr[i]*=-1;
		cout << arr[i] << " ";
	}
	cout << endl;*/

	// 4 --------------------------------

	/*const int size = 100;
	int arr[size], max = 0, p = 0;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(arr[i] == arr[j] && i != j)
				p++;
		}
		if(p > max)
			max = arr[i];
	}
	cout << "Number: " << max << endl;*/

	// 5 --------------------------------

	/*const int size = 5;
	int ser[size], good = 0, norm = 0, bad = 0;
	for(int i = 0; i < size; i++)
	{
		ser[i] = rand()%12+1;
		if(ser[i] > 9 && ser[i] <= 12)
			good++;
		else if(ser[i] > 6 && ser[i] < 10)
			norm++;
		else if(ser[i] >= 1 && ser[i] < 7)
			bad++;
	}
	cout << "Good student: " << good << endl;
	cout << "Norm student: " << norm << endl;
	cout << "Bad student: " << bad << endl;*/

	// 6 --------------------------------

	/*const int size = 10;
	char word[size] = {"did"};
	int end, dop = 0;
	for(int i = 0; i < size; i++)
	{
		if(word[i] == '\0')
		{
			end = i;
			break;
		}
	}
	for(int i = 0; i <= end; i++)
	{
		if(word[i] == word[end-i-1])
			dop++;
	}
	if(dop == end)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;*/

	// 7 --------------------------------

	const int size = 10;
	double arr[size];
	int pr = 0;
	for(int i = 0; i < size; i++)
	{
		cout << "Number: ";
		cin >> arr[i];
		cout << endl;
	}
	for(int i = 2; i < size; i++)
	{
		if(arr[i]/arr[i-1] == arr[i-1]/arr[i-2])
			pr++;
	}
	if(pr == size-2)
	{
		cout << "This is geom. progression" <<  endl;
		cout << "Dilnuk: " << arr[1]/arr[0] << endl;
	}
	else
		cout << "This is no geom. progression" << endl;

	system("pause");
}