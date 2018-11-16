#include<iostream>
#include<ctime>

using namespace std;

bool cows(int num, int arr[]);
void RndArr(int arr[]);
void ArrS(int arr1[], int arr2[]);
void ArrO(int arr1[], int arr2[]);
void Clear(int arr[]);
void Ser(int arr[]);

const int size = 10;

int main()
{
	srand(time(0));

	// 1---------------------

	/*int num, n[4], in = 0;
	bool end = true;
	while(true)
	{
		n[in] = rand()%10;
		if(n[in] != n[in-1] || in == 0)
			in++;
		if(in > 3)
			break;
	}
	while(end)
	{
		system("cls");
		cout << "Number: ";
		cin >> num;
		end = cows(num, n);
		system("pause");
	}
	cout << "You win" << endl;
	system("pause");*/


	// 2 -----------------------

	/*int arr1[size], arr2[size];
	RndArr(arr1);
	system("pause");
	RndArr(arr2);
	system("pause");
	ArrS(arr1, arr2);
	system("pause");
	ArrO(arr1, arr2);
	system("pause");
	Clear(arr1);
	system("pause");
	Clear(arr2);
	system("pause");*/

	// 3 --------------------
	int arr[size];
	RndArr(arr);
	Ser(arr);
	system("pause");
}

bool cows(int num, int arr[])
{
	int n[4], buk = 0, cows = 0;
	for(int i = 3; i > -1; i--)
	{
		n[i] = num%10;
		num/=10;
	}
	for(int i = 0; i < 4; i++)
	{
		if(n[i] == arr[i])
			buk++;
		else
		{
			for(int j = 0; j < 4; j++)
			{
				if(n[i] == arr[j])
				{
					cows++;
					break;
				}
			}
		}
	}
	cout << "Cows: " << cows << endl;
	cout << "Buks: " << buk << endl;
	if(buk == 4)
		return 0;
	else
		return 1;
};

void RndArr(int arr[])
{
	srand(time(0));
	for(int i = 0; i < size; i++)
		arr[i] = rand()%10;
	cout << "Arr: ";
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
};

void ArrS(int arr1[], int arr2[])
{
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < size; i++)
	{
		sum1+=arr1[i];
		sum2+=arr2[i];
	}
	if(sum1 > sum2)
		cout << "First > Second" << endl;
	else if(sum1 == sum2)
		cout << "First = Second" << endl;
	else if(sum1 < sum2)
		cout << "First < Second" << endl;
};
void ArrO(int arr1[], int arr2[])
{
	for(int i = 0; i < size; i++)
		swap(arr1[i], arr2[i]);
	cout << "Arr1: ";
	for(int i = 0; i < size; i++)
		cout << arr1[i] << " ";
	cout << endl;
	cout << "Arr2: ";
	for(int i = 0; i < size; i++)
		cout << arr2[i] << " ";
	cout << endl;
};

void Clear(int arr[])
{
	for(int i = 0; i < size; i++)
		arr[i] = 0;
	cout << "Cleared" << endl;
};

void Ser(int arr[])
{
	float ser = 0;
	for(int i = 0; i < size; i++)
		ser+=arr[i];
	ser/=size;
	cout << "Ser: " << ser << endl;
};