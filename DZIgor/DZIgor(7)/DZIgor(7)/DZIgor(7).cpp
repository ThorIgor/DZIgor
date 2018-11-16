#include<iostream>

using namespace std;

int main()
{
	// 1 ---------------------------------
	int width, height, i = 0;
	char sym;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;
	cout << "Symbol: ";
	cin >> sym;
	system("cls");
	while(i < height)
	{
		i++;

		if(i == 1 || i == height)
		{
			for(int j = 0; j < width; j++)
				cout << sym;
		}
		else if(width == 1)
		{
			cout << sym;
		}
		else if(width > 1)
		{
			cout << sym;
			for(int j = 0; j < width-2; j++)
				cout << " ";
			cout << sym;
		}
		cout << endl;
	}

	// 2 -------------------------------------
	/*int day = 0;
	float dis = 10;
	while(dis <= 100)
	{
		day++;
		if(day > 1)
			dis+=dis/10;
		cout << "Day: " << day << endl;
		cout << "Dis: " << dis << endl;
		cout << endl;
	}*/
	system("pause");
}