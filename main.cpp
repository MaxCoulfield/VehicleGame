#include "main.h" //����������� ����������

using namespace std;

class Vehicle
{
public:
	void Go() {
		// ...�����-�� ���
	}
protected:
	void adjust() {} //���������� ����� ����� ��� ���
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
		//�����-�� ���
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