#include"Shape.h"
#include"Unit.h"
#include<ctime>

void main()
{
	srand(time(0));
	// 1 ------------------------------------------------------------

	/*Shape *arr[] = { new Point, new Circle(2), new Cylinder(2, 5) };
	for (auto i : arr)
	{
		cout << "--------";
		i->printShapeName();
		cout << "--------";
		i->print();
		cout << "Area: " << i->area() << "m2" << endl;
		cout << "Volume: " << i->volume() << "m3" << endl;
	}*/

	// 2 ------------------------------------------------------------

	Game game("Demons", 5, "Human", 5);
	game.Battle();



	system("pause");
}