#include<iostream>

using namespace std;

class Car
{
	int angle;
public:
	Car() : angle(0)
	{}
	void Start() const
	{
		cout << "Car start moving" << endl;
	}
	void Stop() const
	{
		cout << "Car stop moving" << endl;
	}

	void Left(const int &a)
	{
		angle += a;
		angle %= 360;
		cout << "Roteting on left " << a << endl;
		cout << "Angle: " << angle << endl;
	}
	void Right(const int &a)
	{
		if (a > angle)
			angle = (a - angle) % 360;
		else
			angle = (angle - a) % 360;
		cout << "Roteting on right " << a << endl;
		cout << "Angle: " << angle << endl;
	}
};

class CarConsol abstract
{
public:
	virtual void Run() const = 0;
	virtual void Stop() const = 0;
	virtual void Rotate(const int &a) = 0;
};

class Adapter : public CarConsol
{
	Car *car;
public:
	Adapter(Car *c) : car(c)
	{}
	void Run() const override
	{
		car->Start();
	}
	void Stop() const override
	{
		car->Stop();
	}
	void Rotate(const int &a) override
	{
		(a > 0) ? car->Right(a) : car->Left(-a);
	}
};

class Driver
{
	CarConsol *car;
public:
	Driver(CarConsol *c) : car(c)
	{}
	Driver()
	{
		car = new Adapter(&Car());
	}
	void drive()
	{
		car->Run();
		car->Rotate(rand()%720-360);
		car->Stop();
	}
};
