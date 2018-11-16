#include<iostream>

using namespace std;

int main()
{
	// 1 ----------------------
	/*int num;
	cout << "Number: ";
	cin >> num;
	if(num >= 90 && num <= 131)
		cout << "True" << endl;
	else
		cout << "False" << endl;*/ 

	// 2 ----------------------
	/*float grn, dol, rub, eur, kurs;
	cout << "Dolars: ";
	cin >> dol;
	cout << "Kurs: ";
	cin >> kurs;
	grn = dol*kurs;
	cout << "Grivnies: " << grn << endl;
	cout << "Rubles: ";
	cin >> rub;
	cout << "Kurs: ";
	cin >> kurs;
	grn = rub*kurs;
	cout << "Grivnies: " << grn << endl;
	cout << "Euros: ";
	cin >> eur;
	cout << "Kurs: ";
	cin >> kurs;
	grn = eur*kurs;
	cout << "Grivnies: " << grn << endl;*/

	// 3 ---------------------------

	/*int num;
	cout << "Number: ";
	cin >> num;
	if(num >= 90 && num <= 131)
	{
		cout << "True" << endl;
		if(num%3 == 0 || num%7 == 0)
			cout << "This is a good number" << endl;
	}
	else
		cout << "False" << endl;*/

	// 4 ------------------------------
	float grn, sum;
	cout << "Prize: ";
	cin >> grn;
	if(grn > 100)
		grn -= grn*0.03;
	else if(grn > 200)
		grn -= grn*0.05;
	cout << "Suma: " << grn << "grn" << endl;

	system("pause");
}