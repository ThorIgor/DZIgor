#include<iostream>

using namespace std;

int main()
{
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
	while(endProg)
	{
		system("cls");
		cout << "Program" << endl;
		cout << "Convert valutes(v)" << endl;
		cout << "Convert mass(m)" << endl;
		cout << "Convert distances(d)" << endl;
		cout << "Calculator(c)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prog: ";
		cin >> prog;
		switch(prog)
		{
		case 'v':
			system("cls");
			cout << "..::Convert valute::.." << endl;
			cout << "\tKurs" << endl;
			cout << "Dol(d): " << dol << "grn" << endl;
			cout << "Eur(e): " << eur << "grn" << endl;
			cout << "Rub(r): " << rub << "grn" << endl;
			cout << "Grn(g)" << endl;
			cout << "Convert with valuta: ";
			cin >> valute1;
			cout << "Convert to valuta: ";
			cin >> valute2;
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
			break;
		case 'm':
			system("cls");
			cout << "..::Convert mass::.." << endl;
			cout << "Mg(m)\tG(g)\tKg(k)\tC(c)\tT(t)" << endl;
			cout << "Convert with: ";
			cin >> massWith;
			cout << "Convert to: ";
			cin >> massTo;
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
			break;
		case 'd':
			system("cls");
			cout << "..::Converter distances::.." << endl;
			cout << "Mm(i)\tSm(s)\tM(m)\tKm(k)" << endl;
			cout << "Convert with: ";
			cin >> disWith;
			cout << "Convert to: ";
			cin >> disTo;
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
			break;
		case 'c':
			cout << "..::Calculator::.." << endl;
			cout << "Number: ";
			cin >> a;
			cout << "Znak: ";
			cin >> zn;
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