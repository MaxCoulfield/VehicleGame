#include "main.h" //стандартные библиотеки

using namespace std;

class Vehicle
{
public:
	void Go() {
		// ...какой-то код
	}
protected:
	void adjust() {} //защищенный метод прост шоб был
};

class Client
{
public:
	virtual ~Client() {}
	virtual void Go() = 0;
	virtual void adjust() = 0;
};

class Adapter : public Client, private Vehicle
{
public:
	Adapter() { }
	void Go() {
		//какой-то код
	}
	void adjust() {
		Vehicle::adjust();
	}
};

int main()
{
	Client * p = new Adapter();
	p->adjust();
	delete p;
	return 0;
}