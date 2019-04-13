#include <iostream>

using namespace std;

class Handler abstract
{
public:
	virtual void setNext(Handler *h) = 0;
};