#include<iostream>

using namespace std;

int main()
{
	// 2 ----------------------------
	/*int num, a, b, c, d;
	cout << "Number: ";
	cin >> num;
	a = num/1000;
	b = (num%1000)/100;
	c = (num%100)/10;
	d = num%10;
	cout << "Frist: " << a << endl;
	cout << "Second: " << b<< endl;
	cout << "Thierd: " << c << endl;
	cout << "Fourth: " << d << endl;*/

	// 3 ----------------------------
	/*float m, km, sm;
	const int pr = 1000;
	cout << "Miters: ";
	cin >> m;
	sm = m*pr;
	km = m/pr;
	cout << "Kilomiters: " << km << endl;
	cout << "Santimiters: " << sm << endl;*/

	// 4 ----------------------------
	/*float day, hv;
	const int pr = 1440;
	cout << "Days: ";
	cin >> day;
	hv = day*pr;
	cout << "Hvilinas: " << hv << endl;*/

	// 5 ----------------------------
	float yearEarth, yearMars;
	cout << "Years on Mars: ";
	cin >> yearMars;
	yearEarth = (yearMars*(686.0/365.0));
	cout << "Years on Earth: " << yearEarth << endl;


	system("pause");
}