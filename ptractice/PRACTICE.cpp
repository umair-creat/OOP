#include "iostream"
using namespace std;
class Algebra
{
private:
	int a=6;
	int b=7;
public:
	///////////////////////////////////////////////////////////////////////////////////
	/*
	//access by using private librabry
	void calculate()
	{
		cout << "a =" <<a << "\t" << "b=" << b << endl;
		cout << "sum of a and b=" << a + b << "\t" << "Divide of a and b=" << a / b << "\n" << "Mltiplay of a and b=" << a * b;
	}*/
	/////////////////////////////////////////////////////////////////////////////////
	/*
	//get value from user by using private identifire:
	void getvalue()
	{
		cout << "Enter the value of a:";
		cin >> a;
		cout << "Enter the value of b:";
		cin >> b;
		cout << "a =" << a << "\t" << "b=" << b << endl;
	}*/
	//return value using private identifire
	int Valuereturn(int c,int d )
	{
		c = a;
		d = b;
		return c + d;

	}	

};
int main()
{

	Algebra obj1;
	
	/*
	//simple access by user by using public identifire
	cout << "a =" << obj1.a << "\t" <<"b="<< obj1.b << endl;*/
	/////////////////////////////////////////////////////////////////
	/*
	//if we want to get value from user by using public:
	cout << "Enter the value of a and b:";
	cin >> obj1.a;
	cin >> obj1.b;
	cout << "a =" << obj1.a << "\t" << "b=" << obj1.b << endl;*/
	////////////////////////////////////////////////////////////////
	/*//if we want sumup divide multiply what ever using public identifire
	cout << "Enter the value of a and b";
	cin >> obj1.a;
	cin >> obj1.b;
	cout << "a =" << obj1.a << "\t" << "b=" << obj1.b << endl;
	cout << "sum of a and b=" << obj1.a + obj1.b << "\t" << "Divide of a and b=" << obj1.a / obj1.b << "\n" << "Mltiplay of a and b=" << obj1.a * obj1.b;
	cout << "\n" << "End what ever you want.";*/
	//////////////////////////////////////////////////////////////////
	/*access by using private identifire
	obj1.calculate();
	*/
	/////////////////////////////////////////////////////////////////
/*	
//get value from user by using private identifire
	obj1.getvalue();*/
	///////////////////////////////////////////////////////////////
	//return the sum of variable which is passing in function;
	cout << "sum is =" << obj1.Valuereturn(23, 22);

	return 0;
}