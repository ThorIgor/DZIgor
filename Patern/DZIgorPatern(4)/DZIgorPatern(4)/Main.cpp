#include"Proxy.h"
#include"Composite.h"
#include"Facade.h"

void main()
{
	// 1 -----------------------------
	/*
	Bank bank;
	CashMañhine CM(&bank);
	bank.AddAccount(1783, 1111, 30);
	bank.AddAccount(1783, 1111, 80);
	bank.AddAccount(1212, 1111, 1200);
	CM.PrintInf(1783);
	CM.GetMoney(1212, 200);
	CM.GetMoney(1783, 200);
	system("pause");
	*/

	// 2 -----------------------------
	/*
	Folder folder("Root");
	folder.AddItem(new File("google.exe", 2039));
	folder.AddItem(new File("HelloWorld.exe", 89354764));
	Folder folder1("Text");
	folder1.AddItem(new File("MyBook.doc", 28));
	Folder folder2("Work");
	folder2.AddItem(new File("MyBigProgect.sln", 1));
	folder2.AddItem(new File("MySmallProdect.sln", 209458));
	folder.AddItem(&folder1);
	folder.AddItem(&folder2);
	folder.Print();
	cout << "Size: " << folder.Size() << endl;
	system("pause");
	*/

	// 3 ------------------------------
	
	CollWord coll;
	coll.addWord(*(new Word("Pruvit", "Hi")));
	coll.addWord(*(new Word("Paka", "By")));
	Facade f(coll, "words.txt");
	f.print();
	f.writeCollWord();
	coll.addWord(*(new Word("Bigtu", "Run")));
	f.setCollWord(coll);
	f.print();
	f.readCollWord();
	f.print();
	system("pause");
}