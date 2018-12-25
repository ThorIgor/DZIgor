#include<iostream>

using namespace std;

enum Type{Kupe, Plackart, Sleeping};

class Car
{
private:
	Type type;
	int pass;
public:
	Car();
	Car(const int &p, const Type &t = Plackart);

	void SetType(const Type &t);
	void SetPass(const int &p);

	Type GetType();
	int GetPass();

	void print() const;

	Car operator = (const Car &two);
	friend ostream &operator << (ostream &os, const Car &car);
	friend istream &operator >> (istream &is, Car &car);
};

class Train
{
private:
	int num;
	char *name;
	Car *car;
	int length;
public:
	Train();
	Train(const int &n, const char *newN = "Train", const int &l = 5);
	Train(const Train &newT);

	void SetNum(const int &n);
	void SetName(const char *newN);
	void SetCar(const Car &newC, const int &n);
	void SetLength(const int &size);

	int GetNum() const;
	Car GetCar(const int &n) const;
	int GetLength() const;

	Car MaxPass() const;
	Car MinPass() const;
	int AllPass() const;

	void print() const;

	Train operator = (const Train &two);
	Car &operator [](const int &n) const;
	void operator ()(const int &n, const int &pass, int type = -1);
	friend ostream &operator << (ostream &os, const Train &train);
};
