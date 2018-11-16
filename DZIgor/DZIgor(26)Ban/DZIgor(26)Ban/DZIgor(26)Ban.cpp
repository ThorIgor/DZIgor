#include<iostream>
#include<ctime>

using namespace std;

bool Login(int num, int numDop)
{
	if(num == numDop)
		return 1;
	else
		return 0;
};

bool Login(char login[], char loginDop[])
{
	bool good;
	for(int i = 0; i < 20; i++)
	{
		if(login[i] == loginDop[i])
			good = true;
		else
		{
			good = false;
			break;
		}
	}
	return good;
};

void Balanse(int rah)
{
	cout << "Rahunok: " << rah << "$" << endl;
};

void Balanse(double rah)
{
	cout << "Rahunok: " << rah << "$" << endl;
};

void Perecaz(int num)
{
	cout << "Money percaz on" << num << endl;
	cout << "Good" << endl;
};

void Perecaz(char login[])
{
	cout << "Money percaz on" << login << endl;
	cout << "Good" << endl;
};

int main()
{
	srand(time(0));
	bool end = false;
	char login[20], pass[20];
	int num;
	char prg;
	double rah;
	while(!end)
	{
		system("cls");
		cout << "Bancomat" << endl;
		cout << "Login(l)" << endl;
		cout << "Registrate(r)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prg: ";
		cin >> prg;
		bool good;
		char loginDop[20], passDop[20];
		int numDop;
		bool exit;
		int in = 0;
		switch(prg)
		{
		case 'l':
			good = false;
			while(!good)
			{
				if(in > 5)
				{
					good = true;
					exit = true;
				}
				in++;
				system("cls");
				numDop = 0;
				cout << "Login or Number: ";
				cin >> loginDop;
				cout << "Password: ";
				cin >> passDop;
				if(loginDop[0] > 47 && loginDop[0] < 58)
				{
					for(int i = 0; i < 20; i++)
					{
						numDop*=10;
						numDop+=loginDop[i]-47;
					}
					good = Login(numDop, num);
				}
				else
				{
					good = Login(loginDop, login);
				}
				if(good)
				{
					for(int i = 0; i < 20; i++)
					{
						if(pass[i] == passDop[i])
						{
							good = true;
							exit = false;
						}
						else
						{
							good = false;
							break;
						}
					}
				}
			}
			while(!exit)
			{
				double dop;
				system("cls");
				cout << "Hello " << login << endl;
				cout << "Balans(cile)(b)" << endl;
				cout << "Balans(drobove)(B)" << endl;
				cout << "Perecaz on card(p)" << endl;
				cout << "Perecaz on phone(P)" << endl;
				cout << "Popovnutu(o)" << endl;
				cout << "Exit(e)" << endl;
				cout << "Prg: ";
				cin >> prg;
				switch(prg)
				{
				case 'b':
					system("cls");
					Balanse((int)rah);
					system("pause");
					break;
				case 'B':
					system("cls");
					Balanse(rah);
					system("pause");
					break;
				case 'p':
					system("cls");
					cout << "How much: ";
					cin >> dop;
					cout << "Login: ";
					cin >> loginDop;
					if(dop <= rah)
					{
						rah-=dop;
						Perecaz(loginDop);
					}
					else
						cout << "You havent enought money" << endl;
					system("pause");
					break;
				case 'P':
					system("cls");
					cout << "How much: ";
					cin >> dop;
					cout << "Number: ";
					cin >> numDop;
					if(dop <= rah)
					{
						rah-=dop;
						Perecaz(numDop);
					}
					else
						cout << "You havent enought money" << endl;
					system("pause");
					break;
				case 'o':
					system("cls");
					cout << "How much: ";
					cin >> dop;
					rah+=dop;
					cout << "Good" << endl;
					system("pause");
					break;
				case 'e':
					exit = true;
					break;
				default:
					system("cls");
					cout << "Error" << endl;
					system("pause");
				}
			}
			break;
		case 'r':
			good = false;
			while(!good)
			{
				system("cls");
				cout << "Login: ";
				cin >> login;
				cout << "Phone Number: ";
				cin >> num;
				cout << "Password: ";
				cin >> pass;
				if(num/100000000 > 0)
				{
					good = true;
					rah = rand()%100;
				}
			}
			break;
		case 'e':
			end = true;
			break;
		default:
			cout << "Error" << endl;
		}
	}
}