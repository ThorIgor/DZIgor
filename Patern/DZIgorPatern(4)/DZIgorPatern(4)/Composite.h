#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ItemFS abstract
{
protected:
	string name;
public:
	ItemFS(const string &n) : name(n)
	{}

	virtual void Print() = 0;
	virtual int Size() = 0;
};

class File : public ItemFS
{
	int size;
public:
	File(const string &n, const int &s) : ItemFS(n), size(s)
	{}

	void Print() override
	{
		cout << name << " " << size << endl;
	}
	int Size() override
	{
		return size;
	}
};

class Folder : public ItemFS
{
	vector<ItemFS*> inside;
public:
	Folder(const string &s) : ItemFS(s)
	{}
	void AddItem(ItemFS *IFS)
	{
		inside.push_back(IFS);
	}

	void Print() override
	{

		cout << name << endl;
		cout << "{" << endl;
		for (auto el : inside)
		{
			el->Print();
		}
		cout << "}" << endl;
	}
	int Size() override
	{
		int sum = 0;
		for (auto el : inside)
			sum += el->Size();
		return sum;
	}
};
