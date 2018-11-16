#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 10;
	int arr[size], dop[size], in[3] = {}, tr;
	int Min = 100, index = -1;
	int num, SIn[2] = {};
	int center, prcenter, pr, search;
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand()%100;
		dop[i] = arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int i = 0; true; i++)
	{
		tr = 0;
		for(int j = 1; j< size; j++)
		{
			if(arr[j-1] > arr[j])
				swap(arr[j-1], arr[j]);
		}
		for(int j = 1; j< size; j++)
		{
			if(arr[j-1] <= arr[j])
				tr++;
		}
		in[0]++;
		if(tr == size-1)
			break;
	}
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Buble: " << in[0] << endl;
	for(int i = 0; i < size; i++)
		arr[i] = dop[i];
	for(int i = 0; i < size; i++)
	{
		tr = 0;
		for(int j = i; j< size; j++)
		{
			if(arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
		in[1]++;
	}
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Vstavka: " << in[1] << endl;
	for(int i = 0; i < size; i++)
		arr[i] = dop[i];
	for (int i = 0; i <size - 1; ++i)
	{
		for (int j = i; j<size; ++j)
		{
			if (Min> arr[j]) 
			{
				Min = arr[j];
				index = j;
			}
		}
		swap(arr[i], arr[index]);
		in[2]++;
		Min = 100;
	}
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "Vubir: " << in[2] << endl;
	cout << "Search: ";
	cin >> num;
	center = size;
	prcenter = 0;
	for(int i = 0; true; i++)
	{
		SIn[0]++;
		if(arr[(center+prcenter)/2] == num)
		{
			search = (center+prcenter)/2;
			break;
		}
		else if(arr[(center+prcenter)/2] > num)
		{
			center = (center+prcenter)/2;
		}
		else if(arr[(center+prcenter)/2] < num)
		{
			if(center > prcenter)
			{
				pr = center;
				center = (center+prcenter)/2;
				prcenter = pr;
			}
			else if(prcenter > center)
			{
				pr = prcenter;
				prcenter = (center+prcenter)/2;
				center = pr;
			}
		}
		
	}
	cout << "Index: " << search << endl;
	cout << "In: " << SIn[0] << endl;
	cout << "Search: ";
	cin >> num;
	for(int i = 0; i < size; i++)
	{
		SIn[1]++;
		if(arr[i] == num)
		{
			cout << "Index: " << i << endl;
			cout << "In: " << SIn[1] << endl;
			break;
		}
	}

	system("pause");
}