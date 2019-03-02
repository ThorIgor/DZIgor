#include<iostream>
#include<string>

using namespace std;

class Button abstract
{
	string name;
public:
	Button(const string &n) : name(n)
	{}
	virtual void Press()
	{
		cout << typeid(*this).name() + 6 << " " << name << " was pressed" << endl;
	}
};

class WinButton : public Button
{
public:
	WinButton(const string & name) : Button(name)
	{}
};

class MacButton : public Button
{
public:
	MacButton(const string &name) : Button(name)
	{}
};

class CheckBox abstract
{
	string name;
	bool check;
public:
	CheckBox(const string &n) : name(n), check(0)
	{}
	virtual void Press()
	{
		(check) ? check = 0 : check = 1;
		cout << typeid(*this).name() + 6 << " " << name << " was pressed" << endl;
		cout << "Checked: ";
		(check) ? cout << "true" : cout << "fasle";
		cout << endl;
	}
};

class WinCheckBox : public CheckBox
{
public:
	WinCheckBox(const string &name) : CheckBox(name)
	{}
};

class MacCheckBox : public CheckBox
{
public:
	MacCheckBox(const string &name) : CheckBox(name)
	{}
};

class Factory abstract
{
public:
	virtual Button &creatButton(const string &name = "Button") = 0;
	virtual CheckBox &creatCheckBox(const string &name = "CheckBox") = 0;
};

class WinFactory : public Factory
{
	static WinFactory *factory;
	WinFactory() = default;
public:
	static WinFactory *gatFactory()
	{
		if (factory == nullptr)
			factory = new WinFactory;
		return factory;
	}
	Button &creatButton(const string &name = "Button")
	{
		Button *button = new WinButton(name);
		return *button;
	}
	CheckBox &creatCheckBox(const string &name = "CheckBox")
	{
		CheckBox *checkBox = new WinCheckBox(name);
		return *checkBox;
	}
};

class MacFactory : public Factory
{
	static MacFactory *factory;
	MacFactory() = default;
public:
	static MacFactory *gatFactory()
	{
		if (factory == nullptr)
			factory = new MacFactory;
		return factory;
	}
	Button &creatButton(const string &name)
	{
		Button *button = new MacButton(name);
		return *button;
	}
	CheckBox &creatCheckBox(const string &name)
	{
		CheckBox *checkBox = new MacCheckBox(name);
		return *checkBox;
	}
};

class Client
{
	Factory *factory;
	Button *button;
	CheckBox *checkBox;
public:
	void Factory(Factory *f)
	{
		factory = f;
	}
	void creatUI(const string &b = "Button", const string &c = "CheckBox")
	{
		button = &factory->creatButton(b);
		checkBox = &factory->creatCheckBox(c);
	}
	void print()
	{
		button->Press();
		checkBox->Press();
	}
};
