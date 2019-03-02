#include"Grandpa.h"
#include"Vector.h"

int main()
{
	// Grandpa ----------------------------------------------------------------
	/*
	Grandpa *family[] = { new Grandpa("Val"), new Daddy("Sam"), new Son("Dan") };
	cout << "Dynamic_cast ---------------------" << endl;
	for (auto i : family)
	{
		Daddy *d;
		Son *s;
		i->sleep();
		if (d = dynamic_cast<Daddy*>(i))
			d->walk();
		if (s = dynamic_cast<Son*>(i))
			s->play();
	}
	cout << "Typeid ---------------------------" << endl;
	for (auto i : family)
	{
		Daddy *d;
		Son *s;
		i->sleep();
		if (typeid(Daddy) == typeid(*i) || typeid(Son) == typeid(*i))
		{
			d = static_cast<Daddy*>(i);
			d->walk();
		}
		if (typeid(Son) == typeid(*i))
		{
			s = static_cast<Son*>(i);
			s->play();
		}
	}
	*/

	// Const_cast -------------------------------------------------
	/*
	cout << "Char * -----------------------" << endl;
	const char *t = "my text";
	char *dt = const_cast<char*>(t);
	cout << t << endl;
	
	cout << "String -----------------------" << endl;
	const string *ps = new string("my text");
	string *dps = const_cast<string*>(ps);
	*dps = "hello";
	cout << *ps << endl;
	*/

	// Vector -----------------------------------------------------

	Vector<int> test(5, 3);
	Vector<int> dtest(test);
	test.add(1, 9);
	dtest = test;
	dtest.print();
	cout << "Back: " << test.back() << " Front: " << test.front() << endl;
	test.clear();
	cout << "Empty: " << test.empty() << endl;
	test.reserve(10);
	test.resize(5, 8);
	test[3] = 3;
	test.remove(1);

	cout << "-------------------------------" << endl;

	Vector<int> v1(2); // ��������� ����� = 2, �������� ���, buffer -> [0][0], 
	//buffer - ���� ��������� �� ����� ������, ���� capacity �����(capcity = 4, �� buffer -> [0][0][.][.])
	v1.pushBack(10);
	v1.pushBack(20);
	cout << "The size of v is " << v1.getSize() << endl; // 4
	cout << "The capacity of v is " << v1.getCapacity() << endl; // >=4, ����������������, �-�, ���������������������������������������������������������������(1.5 �� 2)
	v1.print(); // 0 0 10 20
	cout << v1[2] << " " << v1[3] << endl;// ������ 10  20
	for (size_t i = 0; i < v1.getSize(); ++i)// �����������������������
		cout << v1[i] << "\t";
	if (!v1.empty())// �����������
		v1.popBack(); // �������� �������
	v1.print(); // 0 0 10
	cout << "The size of v is " << v1.getSize() << endl; // 3
	v1.reserve(20); // capacity = 20, size = �������(3)
	v1.front() = 1234; // ������ ������� ������� �� 1234
	v1.clear();
	cout << "The size of v after clearing is " << v1.getSize() << endl; // 0


	system("pause");
}