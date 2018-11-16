#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	/*float num;
	cout << "Number: ";
	cin >> num;
	cout << "Number(int)" << (int)num << endl;
	num -= (int)num;
	cout << "Number(float)" << num << endl;*/

	/*int x, c = 0, n, sum = 0, nep = 0;
	cout << "Number: ";
	cin >> x;
	for(int i = 1;true;i*=10)
	{
		c++;
		if (x/i < 10)
		{
			cout << "Number: " << c << endl;
			break;
		}
	}
	for (int i = 10; i <= x*10; i *= 10)
	{
		n = (x%i * 10) / i;
		sum += n;
		if (n % 2 == 1)
			nep++;
	}
	cout << "Sum: " << sum << endl;
	cout << "Neparni: " << nep << endl;
	cout << "Number: " << n << endl;*/

	////Main
	//float bal;
	//const int pin = 1972;
	//int pr;
	//float bln = 5;
	//char prg;
	//// End
	//bool end = true, exit = true;
	//// Popovnutu rahunok
	//float com, vns;
	////Podthvonutu
	//float kus, lif, vod, time, pri;	
	//char op;
	//while (end)
	//{
	//	cout << "Pin: ";
	//	cin >> pr;
	//	if (pr == pin)
	//	{
	//		while (exit)
	//		{
	//			system("cls");
	//			cout << "..:: Telefon ::.." << endl;
	//			cout << "Popovnutu rahunok(r)" << endl;
	//			cout << "Podthvonutu(p)" << endl;
	//			cout << "Nadislatu SMS(s)" << endl;
	//			cout << "Balance(b)" << endl;
	//			cout << "Exit(e)" << endl;
	//			cout << "Prg: ";
	//			cin >> prg;
	//			switch (prg)
	//			{
	//			case 'r':
	//				com = rand()%5;
	//				while (true)
	//				{
	//					system("cls");
	//					cout << "Your balance: " << bln << endl;
	//					cout << "Comisiya: " << com << endl;
	//					cout << "Popovnutu(p)\tExit(e)" << endl;
	//					cout << "Prg: ";
	//					cin >> prg;
	//					if (prg == 'p')
	//					{
	//						system("cls");
	//						cout << "Your vnesoc: ";
	//						cin >> vns;
	//						if (vns < com)
	//							bln += vns;
	//						else
	//						{
	//							vns -= com;
	//							bln += vns;
	//						}
	//						cout << "Your vnesoc with comisiua: " << vns << endl;
	//						cout << "Your balnce: " << bln << endl;
	//						system("pause");
	//					}
	//					else if (prg == 'e')
	//					{
	//						cout << "Exit" << endl;
	//						break;
	//					}
	//					else
	//						cout << "Error" << endl;
	//				}
	//				break;
	//			case 'p':
	//				kus = (rand() % 200)/100.0;
	//				lif = (rand() % 200)/100.0;
	//				vod = (rand() % 200)/100.0;
	//				while (true)
	//				{
	//					system("cls");
	//					cout << "..:: Podthvonutu ::.." << endl;
	//					cout << "Your balance: " << bln << endl;
	//					cout << "KUS(k): " << kus << " LIF(l): " << lif << " VOD(v): " << vod << endl;
	//					cout << "Podthvonutu(p)\tExit(e)" << endl;
	//					cout << "Prg: ";
	//					cin >> prg;
	//					if (prg == 'p')
	//					{
	//						cout << "Operator: ";
	//						cin >> op;
	//						cout << "Time: ";
	//						cin >> time;
	//						if (op == 'k')
	//						{
	//							pri = kus*time;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else if (op == 'l')
	//						{
	//							pri = lif*time;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else if (op == 'v')
	//						{
	//							pri = vod*time;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else
	//							cout << "Error" << endl;
	//					}
	//					else if (prg == 'e')
	//					{
	//						cout << "Exit" << endl;
	//						break;
	//					}
	//				}
	//				break;
	//			case 's':
	//				kus = (rand() % 50) / 100.0;
	//				lif = (rand() % 50) / 100.0;
	//				vod = (rand() % 50) / 100.0;
	//				while (true)
	//				{
	//					system("cls");
	//					cout << "..:: SMS ::.." << endl;
	//					cout << "Your balance: " << bln << endl;
	//					cout << "KUS(k): " << kus << " LIF(l): " << lif << " VOD(v): " << vod << endl;
	//					cout << "SMS(s)\tExit(e)" << endl;
	//					cout << "Prg: ";
	//					cin >> prg;
	//					if (prg == 's')
	//					{
	//						cout << "Operator: ";
	//						cin >> op;
	//						if (op == 'k')
	//						{
	//							pri = kus;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else if (op == 'l')
	//						{
	//							pri = lif;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else if (op == 'v')
	//						{
	//							pri = vod;
	//							if (pri > bln)
	//							{
	//								cout << "You don`t have enaght monay" << endl;
	//								system("pause");
	//							}
	//							else
	//							{
	//								cout << "Prithe: " << pri << endl;
	//								bln -= pri;
	//								system("pause");
	//							}
	//						}
	//						else
	//							cout << "Error" << endl;
	//					}
	//					else if (prg == 'e')
	//					{
	//						cout << "Exit" << endl;
	//						break;
	//					}
	//				}
	//				break;
	//			case 'b':
	//				system("cls");
	//				cout << "Balance: " << bln << endl;
	//				system("pause");
	//				break;
	//			case 'e':
	//				cout << "Exit" << endl;
	//				exit = false;
	//				end = false;
	//			}
	//		}

	//	}
	//	else if(pr == 0)
	//		end = false;
	//	else
	//		cout << "Error" << endl;
	//}

	/*int num = rand()%100+1, n, krok = 0;
	while (true)
	{
		system("cls");
		krok++;
		cout << "Exit(0)" << endl;
		cout << "Number: ";
		cin >> n;
		if (n == num)
		{
			cout << "You WIN" << endl;
			cout << "Poputki: " << krok << endl;
			num = rand() % 100 + 1;
		}
		else if (n < num)
			cout << "Bigger" << endl;
		else if (n > num)
			cout << "Smaler" << endl;
		if (n == 0)
		{
			cout << "Exit" << endl;
			break;
		}
		system("pause");
	}*/

	int hod, pointYou, pointEnemy;
	int rnd, sumYou, sumEnemy;
	char prg;
	while (true)
	{
		system("cls");
		cout << "..::Kosti::.." << endl;
		cout << "Start(s)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prg: ";
		cin >> prg;
		if (prg == 's')
		{
			hod = 0;
			pointYou = 0;
			pointEnemy = 0;
			while (true)
			{
				sumYou = 0;
				sumEnemy = 0;
				hod++;
				system("cls");
				cout << "Your point: " << pointYou << endl;
				cout << "Enemys point: " << pointEnemy << endl;
				cout << "Brosok(b)\tExit(e)" << endl;
				cout << "Prg: ";
				cin >> prg;
				if (prg == 'b')
				{
					system("cls");
					for (int j = 0; j < 4; j++)
					{
						rnd = rand() % 6 + 1;
						if (j < 2)
						{
							if(sumYou == rnd)
							{
								sumYou+=rnd;
								sumYou*=2;
							}
							else
								sumYou += rnd;
						}
						else
						{
							if(sumEnemy == rnd)
							{
								sumEnemy+=rnd;
								sumEnemy*=2;
							}
							else
								sumEnemy += rnd;
						}
						if(j == 0) 
							cout << "You" << endl;
						if(j == 2)
							cout << "Enemy" << endl;
						cout << "#####" << endl;
						switch(rnd)
						{
						case 1:
							cout << "#   #" << endl;
							cout << "# * #" << endl;
							cout << "#   #" << endl;
							break;
						case 2:
							cout << "#*  #" << endl;
							cout << "#   #" << endl;
							cout << "#  *#" << endl;
							break;
						case 3:
							cout << "#*  #" << endl;
							cout << "# * #" << endl;
							cout << "#  *#" << endl;
							break;
						case 4:
							cout << "#* *#" << endl;
							cout << "#   #" << endl;
							cout << "#* *#" << endl;
							break;
						case 5:
							cout << "#* *#" << endl;
							cout << "# * #" << endl;
							cout << "#* *#" << endl;
							break;
						case 6:
							cout << "#* *#" << endl;
							cout << "#* *#" << endl;
							cout << "#* *#" << endl;
							break;
						}
						cout << "#####" << endl;
						cout << endl;
					}
					cout << "+" << sumYou << " point for You" << endl;
					cout << "+" << sumEnemy << " point for Enemy" << endl;
					pointYou+=sumYou;
					pointEnemy+=sumEnemy;
					system("pause");
				}
				else if (prg == 'e')
				{
					system("cls");
					cout << "Exiting..." << endl;
					break;
				}
				else
				{
					system("cls");
					cout << "Error" << endl;
					system("pause");
				}

				if(hod > 2 && pointYou > pointEnemy)
				{
					system("cls");
					cout << "You WIN!!!" << endl;
					system("pause");
					break;
				}
				else if(hod > 2 && pointEnemy > pointYou)
				{
					system("cls");
					cout << "You LOSE" << endl;
					system("pause");
					break;
				}
 			}
		}
		else if (prg == 'e')
		{
			system("cls");
			cout << "Exit" << endl;
			system("pause");
			break;
		}
		else
		{
			system("cls");
			cout << "Error" << endl;
			system("pause");
		}
			
	}

	system("pause");
}