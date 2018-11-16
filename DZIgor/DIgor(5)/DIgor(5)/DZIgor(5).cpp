#include<iostream>
using namespace std;

int main()
{
	// 1 ------------------------
	/*int vag;
	float kg;
	cout << "1.Miligram\t2.Gram\t3.Kilogram\t4.Centner\t5.Tona" << endl;
	cout << "Vaga: ";
	cin >> vag;
	switch(vag)
	{
	case 1:
		cout << "Miligram: ";
		cin >> kg;
		cout << "Kilogram: " << kg/1000000 << endl;
		break;
	case 2:
		cout << "Gram: ";
		cin >> kg;
		cout << "Kilogram: " << kg/1000 << endl;
		break;
	case 3:
		cout << "Kilogram: ";
		cin >> kg;
		cout << "Kilogram: " << kg << endl;
		break;
	case 4:
		cout << "Centner: ";
		cin >> kg;
		cout << "Kilogram: " << kg*100 << endl;
		break;
	case 5:
		cout << "Tona: ";
		cin >> kg;
		cout << "Kilogram: " << kg*1000 << endl;
		break;
	default:
		cout << "Error" << endl;
	}*/

	// 2 ----------------------------------------
	/*int day, mon;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> mon;
	if(mon > 12 || mon < 1)
	{
		cout << "Error" << endl;
	}
	else if((day > 29 && mon == 2) || (day > 30 && mon == 3 || mon ==5 || mon == 8 || mon == 10) || (day > 31 && mon == 2 || mon == 4 || mon == 6 || mon == 7 || mon == 9 || mon == 11 || mon == 12))
	{
		cout << "Error" << endl;
	}
	else
	{
		if(day == 29 && mon == 2)
		{
			day = 1;
			mon = 3;
		}
		else if(day == 31)
		{
			switch(mon)
			{
			case 12:case 2:case 4:case 6:case 7:case 9:case 11:
				day = 1;
				mon++;
				break;
			default:
				day++;
			}
		}
		else if(day == 30)
		{
			switch(mon)
			{
			case 3:case 5:case 8:case 10:
				day = 1;
				mon++;
				break;
			default:
				day++;
			}
		}
		else
			day++;
		cout << "Day: " << day << "\tMonth: " << mon << endl;
	}*/

	// 3 ---------------------------------------------
	//Main
	char login, prog;
	bool end = true;
	//Kalculator
	float num1, num2;
	char zn;
	//Converter valute
	float num;
	char valute1, valute2;
	const float dol = 28.56, eur = 40.67, rub = 0.42;
	//-----------------------------------------------
	cout << "Login: ";
	cin >> login;
	if(login == 0)
		cout << "Error" << endl;
	else
	{
		while(end)
		{
			system("cls");
			cout << "..::Programe::.." << endl;
			cout << "Kalculator(k)" << endl;
			cout << "Convert valute(c)" << endl;
			cout << "Weather(w)" << endl;
			cout << "Exit(e)" << endl;
			cout << "Prog: ";
			cin >> prog;
			switch(prog)
			{
			case 'k':
				system("cls");
				cout << "Number: ";
				cin >> num1;
				cout << "Znak: ";
				cin >> zn;
				cout << "Number: ";
				cin >> num2;
				if(zn == '/' && num2 == 0)
				{
					cout << "Error" << endl;
					system("pause");
				}
				else
				{
					switch(zn)
					{
					case '+':
						cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
						break;
					case '-':
						cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
						break;
					case '*':
						cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
						break;
					case '/':
						cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
						break;
					default:
						cout << "Error" << endl;
					}
				}
				system("pause");
				break;
				//-------------------------------------------------------
			case 'c':
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
				//------------------------------------------------------
			case 'w': 
				system("cls");
				cout << "..::Weather::.." << endl;
				cout << "24 May: 24*C, sunny" << endl;
				cout << "25 May: 26*C, sunny" << endl;
				cout << "26 May: 20*C, cloudy" << endl;
				system("pause");
				break;
				//-------------------------------------------------------
			case 'e':
				system("cls");
				end = false;
				cout << "Exit" << endl;
				break;
			default:
				system("cls");
				cout << "Error" << endl;
				system("pause");
			}
		}
	}

	system("pause");
}