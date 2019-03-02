#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct violation
{
	string name;
	string date;
	double sum;
	violation(const string &n = "0", const string &d = "0", const double &s = 0) : name(n), date(d), sum(s)
	{}
	void print()
	{
		cout << "Name: " << name << " Date: " << date << " Sum: " << sum << endl;
	}
	void input()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Date: ";
		cin >> date;
		cout << "Sum: ";
		cin >> sum;
	}
};

class Auto
{
	int number;
	vector<violation> viol;
	Auto *left, *right;
public:
	Auto(const int &num, const violation &v) : number(num)
	{
		viol.push_back(v);
		left = nullptr;
		right = nullptr;
	}
	void NewViolation(const violation &v)
	{
		viol.push_back(v);
	}
	int getNum()
	{
		return number;
	}
	Auto *&getLeft()
	{
		return left;
	}
	Auto *&getRight()
	{
		return right;
	}
	void print()
	{
		cout << "Number: " << number << endl;
		cout << "Violation: " << endl;
		for (auto i : viol)
			i.print();
	}
};

class DAI
{
	Auto *root = nullptr;
	size_t count = 0;
	void AddDop(Auto *&p, const int &num , const violation &v)
	{
		if (p == nullptr)
		{
			p = new Auto(num, v);
			count++;
		}
		else
		{
			if (p->getNum() <= num)
				AddDop(p->getRight(), num, v);
			else
				AddDop(p->getLeft(), num, v);
		}
	}
	Auto *&Found(const int &num, Auto *p) const
	{
		if (p == nullptr)
			return p;
		else if (p->getNum() == num)
			return p;
		else
		{
			if (p->getNum() <= num)
				return Found(num, p->getRight());
			else
				return Found(num, p->getLeft());
		}
	}
	void printDop(Auto *p) const
	{
		if (p == nullptr)
			return;
		else
		{
			printDop(p->getLeft());
			p->print();
			printDop(p->getRight());
		}
	}
	void ClearDop(Auto *&p)
	{
		if (p == nullptr)
			return;
		else
		{
			ClearDop(p->getLeft());
			ClearDop(p->getRight());
			delete p;
		}
	}
public:
	DAI() = default;

	void AddViolation(const int&num, const violation &v)
	{
		if (Found(num, root) == nullptr)
			AddDop(root, num, v);
		else
			Found(num, root)->NewViolation(v);
	};
	void print() const
	{
		printDop(root);
	}
	void printNum(const int &num) const
	{
		if (Found(num, root) == nullptr)

			cout << "Not found" << endl;
		else
			Found(num, root)->print();
	}
	void printRange(const int &min, const int &max) const
	{
		for (int i = min; i < max; i++)
			if (Found(i, root) != nullptr)
				Found(i, root)->print();

	}
	void Clear()
	{
		ClearDop(root);
	}

	~DAI()
	{
		Clear();
	}
};
