#include "iostream"
using namespace std;
class car
{
private:

	static 	int a;
public:
	car()
	{
		a++;
		cout << "constructer"<<endl;
	}
	~car()
	{
		a--;
		cout << "distructer'"<<endl;
	}
	void seta(int b)
	{
		a = b;
	}
	int geta()
	{
		return a;
	}
	void fun()
	{
		car obj3, boj4, obj5;
		cout << obj3.geta() << endl;
		cout << "End of program:" << endl;
	}
	void fun2()
	{
		car obj4, ob5, obj6, obj7;
		cout << obj4.geta() << endl;
	}
};
int car::a = 0;
int main()
{
	car obj1, obj2, obj3, obj4;
	cout << obj1.geta() << endl;
	cout << "value change" << endl;
	obj1.seta(2);
	cout << obj1.geta() << endl;
	obj3.fun();
	obj3.fun2();
	cout << obj1.geta() << endl;

	return 0;
}
