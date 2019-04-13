#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void main()
{
	// 1 ------------------------------------
	vector<int> vec;
	vec.resize(10);
	generate(vec.begin(), vec.end(), []() {
		static int dop1 = 0, dop2 = 1;
		static bool dop = true;
		if (dop)
		{
			dop = false;
			dop2 += dop1;
			dop1 += dop2;
			return dop2;
		}
		else
		{
			dop = true;
			return dop1;
		}
	});
	for (auto i : vec)
		cout << i << " ";
	cout << endl;

	// 2 ------------------------------------

	// 3 ------------------------------------

	// 4 ------------------------------------

	system("pause");
}