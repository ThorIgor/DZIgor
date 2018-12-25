#include<iostream>

using namespace std;

enum Type {Lake, River, Sea, Ocean};

class Water
{
private:
	char *name = nullptr;
	Type type;
	int width;
	int height;
	int deep;
	static int count;
public:
	Water();
	Water(const char *newN, const Type &newT = Lake, const int &newW = 5, const int &newH = 5, const int &newD = 5);

	void SetName(const char *newN);
	void SetType(const Type &newT);
	void SetSize(const int &newW, const int &newH, const int &newD);

	Type GetType() const;
	int GetW() const;
	int GetH() const;
	int GetD() const;

	int V() const;
	int S() const;

	void print();

	static bool OneType(const Water &a, const Water &b);
	static int Compare(const Water &a, const Water &b);
	static int Biggest(const Water a[], const Type &t, const int &size);
};
