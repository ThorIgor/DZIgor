#include<iostream>

using namespace std;

void Abs(int num)
{
	if(num < 0)
		num = -num;
};

class Int
{
private:
	int num;
public:
	Int(int n = 0)
	{
		num = n;
	};
	int Num()
	{
		return num;
	};
	void Out()
	{
		cout << num;
	};
	void In(int a)
	{
		num = a;
	};
	Int Sum(Int n)
	{
		int res;
		res = num+n.Num();
		return res;
	};
	Int Riz(Int n)
	{
		int res;
		res = num-n.Num();
		return res;
	};
	Int Dob(Int n)
	{
		int res;
		res = num*n.Num();
		return res;
	};
	Int Cha(Int n)
	{
		if(n.Num() == 0)
			return 0;
		int res;
		res = num/n.Num();
		return res;
	};
};

void main()
{
	Int a, b, res;
	int num;
	cout << "A: ";
	cin >> num;
	a.In(num);
	cout << "B: ";
	cin >> num;
	b.In(num);
	cout << "A: ";
	a.Out();
	cout << "  B: ";
	b.Out();
	cout << endl;
	res = a.Sum(b);
	cout << "Res(+): ";
	res.Out();
	cout << endl;
	res = a.Riz(b);
	cout << "Res(-): ";
	res.Out();
	cout << endl;
	res = a.Dob(b);
	cout << "Res(*): ";
	res.Out();
	cout << endl;
	res = a.Cha(b);
	cout << "Res(/): "; 
	res.Out();
	cout << endl;
	system("pause");
}