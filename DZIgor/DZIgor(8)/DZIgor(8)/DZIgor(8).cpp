#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	// 1 -----------------------
	/*int num;
	cout << "Number: ";
	cin >> num;
	for(int i = num; i > 0; i--)
	{
		for(int j = 0; j < i-1; j++)
			cout << " ";
		for(int j = i-1; j < num; j++)
			cout << "*";
		for(int j = i; j < num; j++)
			cout << "*";
		cout << endl;
	}*/

	// 2 ------------------------
	/*int num, n, j = 1;
	bool end = true;
	for(int i = 0; i < 20; i++)
	{
		num = rand();
		while(end)
		{
			n = (num%(j*10))/j;
			if(n == 2)
			{
				cout << "Number: " << num << endl;
				end = false;
			}
			if(j > num)
				end = false;
			j *= 10;
		}
		j = 1;
		end = true;
	}*/

	// 3 ----------------------------------------
	//Main
	bool endProg = true;
	char prog;
	//Convert valute
	char valute1, valute2;
	float num;
	float dol = 28.67, eur = 37.12, rub = 0.37;
	//Convert mass
	char massTo, massWith;
	float mass;
	//Convert distances
	char disTo, disWith;
	float dis;
	//Calculator
	float a, b;
	char zn;
	//Weather
	int wea;
	while(endProg)
	{
		system("cls");
		cout << "Program" << endl;
		cout << "Convert valutes(v)" << endl;
		cout << "Convert mass(m)" << endl;
		cout << "Convert distances(d)" << endl;
		cout << "Calculator(c)" << endl;
		cout << "Weather(w)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prog: ";
		cin >> prog;
		switch(prog)
		{
		case 'v':
			while(true)
			{
				system("cls");
				cout << "..::Convert valute::.." << endl;
				cout << "\tKurs" << endl;
				cout << "Dol(d): " << dol << "grn" << endl;
				cout << "Eur(e): " << eur << "grn" << endl;
				cout << "Rub(r): " << rub << "grn" << endl;
				cout << "Grn(g)" << endl;
				cout << "Go back(b)" << endl;
				cout << "Convert with valuta: ";
				cin >> valute1;
				if(valute1 == 'b')
					break;
				cout << "Convert to valuta: ";
				cin >> valute2;
				if(valute2 == 'b')
					break;
				cout << "How much: ";
				cin >> num;
				if(valute1 == 'd')
				{
					switch(valute2)
					{
					case 'd':
						cout << "Dol: " << num << endl;
						break;
					case 'e':
						cout << "Eur: " << (num*dol)/eur << endl;
						break;
					case 'r':
						cout << "Rub: " << (num*dol)/rub << endl;
						break;
					case 'g':
						cout << "Grn: " << num*dol << endl;
						break;
					default:
						cout << "Error" << endl;
					}
				}
				else if(valute1 == 'e')
				{
					switch(valute2)
					{
					case 'd':
						cout << "Dol: " << (num*eur)/dol << endl;
						break;
					case 'e':
						cout << "Eur: " << num << endl;
						break;
					case 'r':
						cout << "Rub: " << (num*eur)/rub << endl;
						break;
					case 'g':
						cout << "Grn: " << num*eur << endl;
						break;
					default:
						cout << "Error" << endl;
					}
				}
				else if(valute1 == 'r')
				{
					switch(valute2)
					{
					case 'd':
						cout << "Dol: " << (num*rub)/dol << endl;
						break;
					case 'e':
						cout << "Eur: " << (num*rub)/eur << endl;
						break;
					case 'r':
						cout << "Rub: " << num << endl;
						break;
					case 'g':
						cout << "Grn: " << num*rub << endl;
						break;
					default:
						cout << "Error" << endl;
					}
				}
				else if(valute1 == 'g')
				{
					switch(valute2)
					{
					case 'd':
						cout << "Dol: " << num/dol << endl;
						break;
					case 'e':
						cout << "Eur: " << num/eur << endl;
						break;
					case 'r':
						cout << "Rub: " << num/rub << endl;
						break;
					case 'g':
						cout << "Grn: " << num << endl;
						break;
					default:
						cout << "Error" << endl;
					}
				}
				else
					cout << "Erorr" << endl;
				system("pause");
			}
			break;
		case 'm':
			while(true)
			{
				system("cls");
				cout << "..::Convert mass::.." << endl;
				cout << "Mg(m)\tG(g)\tKg(k)\tC(c)\tT(t)" << endl;
				cout << "Go back(b)" << endl;
				cout << "Convert with: ";
				cin >> massWith;
				if(massWith == 'b')
					break;
				cout << "Convert to: ";
				cin >> massTo;
				if(massTo == 'b')
					break;
				cout << "How much: ";
				cin >> mass;
				switch(massWith)
				{
				case 'm':
					switch(massTo)
					{
					case 'm':
						cout << "Miligrams: " << mass << endl;
						break;
					case 'g':
						cout << "Gram: " << mass/1000 << endl;
						break;
					case 'k':
						cout << "Kilogram: " << mass/1000000 << endl;
						break;
					case 'c':
						cout << "Centner: " << mass/100000000 << endl;
						break;
					case 't':
						cout << "Tona: " << mass/1000000000 << endl;
						break;
					default:
						cout << "Error" << endl;
					}
					break;
				case 'g':
					switch(massTo)
					{
					case 'm':
						cout << "Miligrams: " << mass*1000 << endl;
						break;
					case 'g':
						cout << "Gram: " << mass << endl;
						break;
					case 'k':
						cout << "Kilogram: " << mass/1000 << endl;
						break;
					case 'c':
						cout << "Centner: " << mass/100000 << endl;
						break;
					case 't':
						cout << "Tona: " << mass/1000000 << endl;
						break;
					default:
						cout << "Error" << endl;
					}
					break;
				case 'k':
					switch(massTo)
					{
					case 'm':
						cout << "Miligrams: " << mass*1000000 << endl;
						break;
					case 'g':
						cout << "Gram: " << mass*1000 << endl;
						break;
					case 'k':
						cout << "Kilogram: " << mass << endl;
						break;
					case 'c':
						cout << "Centner: " << mass/100 << endl;
						break;
					case 't':
						cout << "Tona: " << mass/1000 << endl;
						break;
					default:
						cout << "Error" << endl;
					}
					break;
				case 'c':
					switch(massTo)
					{
					case 'm':
						cout << "Miligrams: " << mass*100000000 << endl;
						break;
					case 'g':
						cout << "Gram: " << mass*100000 << endl;
						break;
					case 'k':
						cout << "Kilogram: " << mass*100 << endl;
						break;
					case 'c':
						cout << "Centner: " << mass << endl;
						break;
					case 't':
						cout << "Tona: " << mass/10 << endl;
						break;
					default:
						cout << "Error" << endl;
					}
					break;
				case 't':
					switch(massTo)
					{
					case 'm':
						cout << "Miligrams: " << mass*1000000000 << endl;
						break;
					case 'g':
						cout << "Gram: " << mass*1000000 << endl;
						break;
					case 'k':
						cout << "Kilogram: " << mass*1000 << endl;
						break;
					case 'c':
						cout << "Centner: " << mass*10 << endl;
						break;
					case 't':
						cout << "Tona: " << mass << endl;
						break;
					default:
						cout << "Error" << endl;
					}
					break;
				default:
					cout << "Error" << endl;
				}
				system("pause");
			}
			break;
		case 'd':
			while(true)
			{
				system("cls");
				cout << "..::Converter distances::.." << endl;
				cout << "Mm(i)\tSm(s)\tM(m)\tKm(k)" << endl;
				cout << "Go back(b)" << endl;
				cout << "Convert with: ";
				cin >> disWith;
				if(disWith == 'b')
					break;
				cout << "Convert to: ";
				cin >> disTo;
				if(disTo == 'b')
					break;
				cout << "Hoe much: ";
				cin >> dis;
				switch(disWith)
				{
				case 'i':
					switch(disTo)
					{
					case 'i':
						cout << "Milimeter: " << dis << endl;
						break;
					case 's':
						cout << "Santmeter: " << dis/10 << endl;
						break;
					case 'm':
						cout << "Meter: " << dis/1000 << endl;
						break;
					case 'k':
						cout << "Kilometer: " << dis/1000000 << endl;
						break;
					default:
						system("cls");
						cout << "Error" << endl;
					}
					break;
				case 's':
					switch(disTo)
					{
					case 'i':
						cout << "Milimeter: " << dis*10 << endl;
						break;
					case 's':
						cout << "Santmeter: " << dis << endl;
						break;
					case 'm':
						cout << "Meter: " << dis/100 << endl;
						break;
					case 'k':
						cout << "Kilometer: " << dis/100000 << endl;
						break;
					default:
						system("cls");
						cout << "Error" << endl;
					}
					break;
				case 'm':
					switch(disTo)
					{
					case 'i':
						cout << "Milimeter: " << dis*1000 << endl;
						break;
					case 's':
						cout << "Santmeter: " << dis*100 << endl;
						break;
					case 'm':
						cout << "Meter: " << dis << endl;
						break;
					case 'k':
						cout << "Kilometer: " << dis/1000 << endl;
						break;
					default:
						system("cls");
						cout << "Error" << endl;
					}
					break;
				case 'k':
					switch(disTo)
					{
					case 'i':
						cout << "Milimeter: " << dis*1000000 << endl;
						break;
					case 's':
						cout << "Santmeter: " << dis*100000 << endl;
						break;
					case 'm':
						cout << "Meter: " << dis*1000 << endl;
						break;
					case 'k':
						cout << "Kilometer: " << dis << endl;
						break;
					default:
						system("cls");
						cout << "Error" << endl;
					}
					break;
				default:
					system("cls");
					cout << "Error" << endl;
				}
				system("pause");
			}
			break;
		case 'c':
			while(true)
			{
				system("cls");
				cout << "..::Calculator::.." << endl;
				cout << "Go back(znak = 1)" << endl;
				cout << "Number: ";
				cin >> a;
				cout << "Znak: ";
				cin >> zn;
				if(zn == '1')
					break;
				cout << "Number: ";
				cin >> b;
				if(zn == '/' && b == 0)
				{
					system("cls");
					cout << "Error" << endl;
				}
				else
				{
					switch(zn)
					{
					case '+':
						cout << a << " + " << b << " = " << a+b << endl;
						break;
					case '-':
						cout << a << " - " << b << " = " << a-b << endl;
						break;
					case '*':
						cout << a << " * " << b << " = " << a*b << endl;
						break;
					case '/':
						cout << a << " / " << b << " = " << a/b << endl;
						break;
					default:
						system("cls");
						cout << "Error" << endl;
					}
				}
				system("pause");
			}
			break;
		case 'w':
				system("cls");
				cout << "..::Weather::.." << endl;
				cout << "Today: " << rand()%40-10 << "*C ";
				wea = rand()%3;
				switch(wea)
				{
				case 0:
					cout << "Sunny" << endl;
					break;
				case 1:
					cout << "Windy" << endl;
					break;
				case 2:
					cout << "Cloudy" << endl;
				}
				cout << "Tomorow: " << rand()%40-10 << "*C ";
				wea = rand()%3;
				switch(wea)
				{
				case 0:
					cout << "Sunny" << endl;
					break;
				case 1:
					cout << "Windy" << endl;
					break;
				case 2:
					cout << "Cloudy" << endl;
				}
				system("pause");
				break;
		case 'e':
			system("cls");
			cout << "Exit" << endl;
			endProg = false;
			break;
		default:
			system("cls");
			cout << "Error" << endl;
			system("pause");
		}
	}
	system("pause");
}