#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
#include<array>
#include<ctime>

#include"Consol.h"

using namespace std;

// 1 ---------------------------------
void encryptor(const string &filename, const int &key)
{
	ifstream fin(filename);
	string content;
	while (!fin.eof())
	{
		char dop;
		fin.get(dop);
		content += dop;
	}
	fin.close();
	ofstream fout(filename);
	for (int i = 0; i < content.size(); i++)
	{
		fout << char(content[i]+key);
	}
}

// 3 ---------------------------------
bool Three(const int &el)
{
	return (el > 99 && el < 1000) || (el < -99 && el > -1000);
}

bool Cr5(const int &el)
{
	return el % 5 == 0;
}

void main()
{
	srand(time(0));

	// 1 -----------------------------
	//encryptor("Test.txt", 2);
	

	// 2 -----------------------------
	Consol con;
	con.Work();

	// 3 -----------------------------
	/*cout << "----------------------- 1 ------------------------" << endl;
	const int size = 10;
	array<int, size> arr;
	generate(arr.begin(), arr.end(), []() {return rand() % 4001 - 2000; });
	cout << "Arr: ";
	for (auto i : arr)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 2 ------------------------" << endl;
	vector<int> v1(5), v2(5);
	copy(arr.begin(), arr.begin() + size / 2, v1.begin());
	copy(arr.begin() + size / 2, arr.end(), v2.begin());
	cout << "V1: ";
	for (auto i : v1)
		cout << i << " ";
	cout << endl << "V2: ";
	for (auto i : v2)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 3 ------------------------" << endl;
	random_shuffle(v1.begin(), v1.end());
	random_shuffle(v2.begin(), v2.end());
	cout << "V1: ";
	for (auto i : v1)
		cout << i << " ";
	cout << endl << "V2: ";
	for (auto i : v2)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 4 ------------------------" << endl;
	copy(v1.begin(), v1.end(), arr.begin());
	copy(v2.begin(), v2.end(), arr.begin() + size / 2);
	cout << "Arr: ";
	for (auto i : arr)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 5 ------------------------" << endl;
	swap(*max_element(arr.begin(), arr.end()), *min_element(arr.begin(), arr.end()));
	cout << "Arr: ";
	for (auto i : arr)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 6 ------------------------" << endl;
	int dop;
	cout << "Number: ";
	cin >> dop;
	if (find(arr.begin(), arr.end(), dop) != arr.end())
		cout << "Find!!!" << endl;
	else
		cout << "Nothing" << endl;
	cout << endl;

	cout << "----------------------- 7 ------------------------" << endl;
	vector<int> v3(count_if(arr.begin(), arr.end(), Three));
	copy_if(arr.begin(), arr.end(), v3.begin(), Three);
	cout << "V3: ";
	for (auto i : v3)
		cout << i << " ";
	cout << endl << endl;

	cout << "----------------------- 8 ------------------------" << endl;
	cout << "Index of first -: " << find_if(arr.begin(), arr.end(), 
		[](const int &el) {return el < 0; }) - arr.begin() << endl << endl;

	cout << "----------------------- 9 ------------------------" << endl;
	dop = 0;
	while (dop < arr.size())
	{
		dop = find_if(arr.begin()+dop+1, arr.end(), Cr5) - arr.begin();
		if(dop != arr.size())
			cout << "Index of number that % 5 == 0: " << dop << endl;
	}
	cout << endl;

	cout << "----------------------- 10 -----------------------" << endl;
	vector<int> v4(count_if(arr.begin(), arr.end(), Cr5));
	copy_if(arr.begin(), arr.end(), v4.begin(), Cr5);
	cout << "V4: ";
	for (auto i : v4)
		cout << i << " ";
	cout << endl << endl;*/

	system("pause");
}