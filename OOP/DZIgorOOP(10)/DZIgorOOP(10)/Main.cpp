#include"DAI.h"
#include"Auto.h"

int main()
{
	// 1 -----------------------------------------------------

	/*violation dop;
	int num;
	DAI dai;
	char prg;
	bool end = false;
	while (!end)
	{
		system("cls");
		cout << "DAI" << endl;
		cout << "New violation(n)" << endl;
		cout << "Print all violation(p)" << endl;
		cout << "Print for number(f)" << endl;
		cout << "Print in range(r)" << endl;
		cout << "---------------------" << endl;
		cout << "Exit(e)" << endl;
		cout << "Prg: ";
		cin >> prg;
		switch (prg)
		{
		case 'n':
			system("cls");
			cout << "Number of auto: ";
			cin >> num;
			dop.input();
			dai.AddViolation(num, dop);
			system("pause");
			break;
		case 'p':
			system("cls");
			dai.print();
			system("pause");
			break;
		case 'f':
			system("cls");
			cout << "Number of auto: ";
			cin >> num;
			dai.printNum(num);
			system("pause");
			break;
		case 'r':
			int max, min;
			system("cls");
			cout << "From: ";
			cin >> min;
			cout << "To: ";
			cin >> max;
			dai.printRange(min, max);
			system("pause");
			break;
		case 'e':
			end = true;
		}
	}*/

	try {
		Mashine mash("AB296AB", 200);
		mash.SetSpeed(300);
	}
	catch (...)
	{
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}