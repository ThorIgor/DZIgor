#include<iostream>
#include<ctime>

using namespace std;

void Height(int a);
void Weight(int a);
bool NumInBool(int a);
float Step(float a, int n);

int main()
{
	// 1 ---------------
	/*Weight(10);
	Weight(7);
	Weight(4);
	cout << endl;
	Weight(8);
	Height(3);
	Weight(13);
	Height(3);
	Weight(18);
	cout << endl;*/

	// 2 --------------
	/*int num;
	cout << "Number: ";
	cin >> num;
	(NumInBool(num))?cout << "True" : cout << "False";
	cout << endl;*/

	// 3 --------------
	float num, n;
	cout << "Number: ";
	cin >> num;
	cout << "Step: ";
	cin >> n;
	cout  << "New number: " << Step(num, n) << endl;

	system("pause");
}

void Height(int a)
{
	for(int i = 0; i < a; i++)
		cout << "*" << endl;
};

void Weight(int a)
{
	for(int i = 0; i < a; i++)
		cout << "*";
	cout << endl;
};

bool NumInBool(int a)
{
	bool dop;
	(a > 0)? dop = true : dop = false;
	return dop;
};

float Step(float a, int n)
{
	float dop = a;
	for(int i = 0; i < n; i++)
	{
		dop*=a;
	}
	return dop;
};