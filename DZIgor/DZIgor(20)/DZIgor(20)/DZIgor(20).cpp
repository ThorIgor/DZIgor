#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));
	//1 -----------------------------------
	/*const int SizeX = 5, SizeY = 5;
	int arr[SizeX][SizeY];
	cout << "Befor: " << endl;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY; i++)
	{
		for(int j = 0; j < SizeX; j++)
		{
			for(int c = 0; c < SizeX; c++)
			{
				if(arr[j][c] > arr[i][c])
					swap(arr[j][c], arr[i][c]);
			}
		}
	}
	cout << "After: " << endl;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
			cout << setw(3) << arr[j][i];
		cout << endl;
	}*/

	//2 ---------------------------------------------
	/*const int SizeX = 5, SizeY = 5;
	int arr[SizeX][SizeY], sum[2] = {};
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY; i++)
	{
		sum[0] += arr[i][i];
		sum[1] += arr[i][SizeY-i-1];
	}
	cout << "Ser(\\): " << sum[0]/SizeY << endl;
	cout << "Ser(/) " << sum[1]/SizeY << endl;*/

	// 3 ------------------------------------------
	/*const int SizeX = 3, SizeY = 3;
	int arr[SizeX][SizeY], pow[SizeX*SizeY] = {}, max = 0, maxIn;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[j][i] = rand()%10;
			cout << setw(2) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY*SizeX; i++)
	{
		for(int j = 0; j < SizeY; j++)
		{
			for(int c = 0; c < SizeX; c++)
			{
				if(arr[i][0] == arr[c][j])
					pow[i]++;
			}
		}
	}
	for(int i = 0; i < SizeY*SizeX; i++)
	{
		if(pow[i] > max)
		{
			max = pow[i];
			maxIn = i;
		}
	}
	cout << "Max: " << arr[maxIn][0] << endl;*/

	//4 -------------------------------------------------
	/*const int SizeX = 5, SizeY = 5;
	int arr[SizeX][SizeY], max = 0, maxIn[2];
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY; i++)
	{
		for(int j = 0; j < SizeX; j++)
		{
			if(j == SizeX-1 && arr[j][i] + arr[0][i+1] > max)
			{
				max = arr[j][i] + arr[0][i+1];
				maxIn[0] = j;
				maxIn[1] = i;
			}
			else if(arr[j][i] + arr[j+1][i] > max)
			{
				max = arr[j][i] + arr[j+1][i];
				maxIn[0] = j;
				maxIn[1] = i;
			}
		}
	}
	if(maxIn[0] == SizeX-1)
		cout << "Numbers: " << arr[maxIn[0]][maxIn[1]] << " " << arr[0][maxIn[1]+1] << endl;
	else
		cout << "Numbers: " << arr[maxIn[0]][maxIn[1]] << " " << arr[maxIn[0]+1][maxIn[1]] << endl;*/

	//5 -------------------------------------
	/*const int SizeX = 5, SizeY = 5;
	int arr[SizeX][SizeY], max, maxIn;
	for(int i = 0; i < SizeY; i++)
	{
		cout << setw(2) << i+1 << "| ";
		for(int j = 0; j < SizeX; j++)
		{
			arr[j][i] = rand()%100;
			cout << setw(3) << arr[j][i];
		}
		cout << endl;
	}
	for(int i = 0; i < SizeY; i++)
	{
		for(int j = 0; j < SizeX; j++)
		{
			if(j == 0 && i == 0)
			{
				if(arr[j][i] > arr[j+1][i])
				{
					max = arr[j][i];
					maxIn = i*SizeX+j;
				}
			}
			else if(j == SizeX && i == SizeY)
			{
				if(arr[j][i] > arr[j-1][i])
				{
					max = arr[j][i];
					maxIn = i*SizeX+j;
				}
			}
			else
			{
				if(arr[j][i] > arr[j+1][i] && arr[j-1][i] < arr[j][i])
				{
					max = arr[j][i];
					maxIn = i*SizeX+j;
				}
			}
		}
	}
	cout << "Local max: " << max << endl;
	cout << "Index max: " << maxIn%SizeX+1 << " " << maxIn/SizeX+1 << endl;*/

	//6 ----------------------------------------------------------------------
	//Я не знаю які завдання

	
	system("pause");
}