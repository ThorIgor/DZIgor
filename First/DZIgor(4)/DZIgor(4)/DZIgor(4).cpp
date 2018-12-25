#include<iostream>

using namespace std;

int main()
{
	// 1 ---------------------------------------
	/*char game;
	cout << "Forest" << endl;
	cout << "Start(s)" << endl;
	cout << "Exit(e)" << endl;
	cout << "Game: ";
	cin >> game;
	if(game == 's')
	{
		system("cls");
		cout << "You are in forest" << endl;
		cout << "Go right(r)" << endl;
		cout << "Go front(f)" << endl;
		cout << "Go left(l)" << endl;
		cout << "Exit(e)" << endl;
		cout << "Game: ";
		cin >> game;
		if(game == 'r')
		{
			system("cls");
			cout << "You are on glade. There is two men. They are sleeping" << endl;
			cout << "Wake a men(w)" << endl;
			cout << "Go left(l)" << endl;
			cout << "Exit(e)" << endl;
			cout << "Game: ";
			cin >> game;
			if(game == 'w')
			{
				system("cls");
				cout << "Battle!!!" << endl;
				cout << "Punch first man(f)" << endl;
				cout << "Punch second man(s)" << endl;
				cout << "Exit(e)" << endl;
				cout << "Game: ";
				cin >> game;
				if(game == 'f')
				{
					system("cls");
					cout << "You punch first man and he fall. Second man punch you but you block his attak." << endl;
					cout << "Then you kick second man and he fall. First man get his dagger but you kick him" << endl;
					cout << "and take away dagger. Then you kill first men and second man escape." << endl;
					cout << "In first man you find a map. This map help you to find a road from forest" << endl;
					system("pause");
					system("cls");
					cout << "The end" << endl;
					system("pause"); 
					return 0;

				}
				else if(game == 's')
				{
					system("cls");
					cout << "You punch second man and he fall. First man get his dagger and kill you" << endl;
					system("pause");
					system("cls");
					cout << "The end" << endl;
					system("pause"); 
					return 0;
				}
				else if(game == 'e')
				{
					cout << "Exit" << endl;
					system("pause"); 
					return 0;
				}
				else
					cout << "Error" << endl;
			}
			else if(game == 'l')
			{
				system("cls");
				cout << "When you turn right men stand up and kill you" << endl;
				system("pause");
				system("cls");
				cout << "The end" << endl;
				system("pause"); 
				return 0;
			}
			else if(game == 'e')
			{
				cout << "Exit" << endl;
				system("pause");
				return 0;
			}
			else
				cout << "Error" << endl;
		}
		else if(game == 'f')
		{
			system("cls");
			cout << "You go for about three days. Your water is run out. There is no water, no food." <<endl;
			cout << "There is nothing. You are in panic. Then you begin searching something to" << endl;
			cout << "drink or eat. But you can't find it. Then you died becouse you didn't drink" << endl;
			system("pause");
			system("cls");
			cout << "The end" << endl;
			system("pause"); 
			return 0;
		}
		else if(game == 'l')
		{
			system("cls");
			cout << "When you are walking, you hear scream. Then you see huge monster." << endl;
			cout << "Escape(s)" << endl;
			cout << "Fight!!!(f)" << endl;
			cout << "Exit(e)" << endl;
			cout << "Game: ";
			cin >> game;
			if(game == 'e')
			{
				system("cls");
				cout << "You immediately begin to run but monster is faster then you." << endl;
				cout << "Then moster punch you and you fall. Then monster kill you" << endl;
				system("pause");
				system("cls");
				cout << "The end" << endl;
				system("pause"); 
				return 0;
			}
			else if(game == 'f')
			{
				system("cls");
				cout << "You aren't scared. You see that there is big sword. You pick up it." << endl;
				cout << "The monster is atake but you dodge and atake him. You cut off his arm." << endl;
				cout << "The monster scream and you kill him. Then you find a village." << endl;
				cout << "You tell your story evrybody but nobody belive that it is true" << endl;
				system("pause");
				system("cls");
				cout << "The end" << endl;
				system("pause"); 
				return 0;
			}
			else if(game == 'e')
			{
				cout << "Exit" << endl;
				system("pause");
				return 0;
			}
			else
				cout << "Error" << endl;
		}
		else if(game == 'e')
		{
			cout << "Exit" << endl;
			system("pause");
			return 0;
		}
		else
			cout << "Error" << endl;
	}
	else if(game == 'e')
	{
		cout << "Exit" << endl;
		system("pause");
		return 0;
	}
	else
		cout << "Error" << endl;*/

	// 2 -------------------------------------------------------
	/*float mag1 = 0, mag2 = 0, mag3 = 0;
	float sell1, sell2, sell3;
	cout << "Sell(manager 1): ";
	cin >> sell1;
	cout << "Sell(manager 2): ";
	cin >> sell2;
	cout << "Sell(manager 3): ";
	cin >> sell3;
	if(sell1 < 500)
		mag1 = 200+(sell1*0.03);
	else if(sell1 < 1000 && sell1 >= 500)
		mag1 = 200+(sell1*0.05);
	else if(sell1 >= 1000)
		mag1 = 200+(sell1*0.08);
	if(sell2 < 500)
		mag2 = 200+(sell2*0.03);
	else if(sell2 < 1000 && sell2 >= 500)
		mag2 = 200+(sell2*0.05);
	else if(sell2 >= 1000)
		mag2 = 200+(sell2*0.08);
	if(sell3 < 500)
		mag3= 200+(sell3*0.03);
	else if(sell3 < 1000 && sell3 >= 500)
		mag3 = 200+(sell3*0.05);
	else if(sell3 >= 1000)
		mag3 = 200+(sell3*0.08);
	if(mag1 > mag2 && mag1 > mag3)
		mag1+=200;
	else if(mag2 > mag1 && mag2 > mag3)
		mag2+=200;
	else if(mag3 > mag1 && mag3 > mag2)
		mag3+=200;
	cout << "Sellery(manager 1): " << mag1 << endl;
	cout << "Sellery(manager 2): " << mag2 << endl;
	cout << "Sellery(manager 3): " << mag3 << endl;*/

	// 3 --------------------------------------------
	/*int time;
	cout << "Time: ";
	cin >> time;
	if(time % 6 >= 4 && time % 6 <= 5 || time == 0)
		cout << "Red" << endl;
	else
		cout << "Green" << endl;*/

	// 4 --------------------------------------------
	int num, x, n1, n2;
	cout << "Number: ";
	cin >> num;
	if(!(num >= 10 && num < 100))
	{
		cout << "Error" << endl;
		system("pause");
		return 0;
	}
	else
	{
		cout << "X: ";
		cin >> x;
		n1 = num/10;
		n2 = num%10;
		if(n1+n2 >= 10)
			cout << "Suma of two number is two-numbered" << endl;
		if(n1+n2 > x)
			cout << "Suma of two number is biger then X" << endl;
	}


	system("pause");
}