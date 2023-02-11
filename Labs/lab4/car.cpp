#include "iostream"
#include "string"
using namespace std;
class Car
{
private:
	int yearmodel; //holds car year model
	string make; //holds the make of the car
	int  speed; //holds cars current speed
public:
	Car(int yearmodel, string m, int s)
	{
		this->yearmodel = yearmodel;
			make = m;
			speed = s;
	}
	Car(const Car& obj)
	{
		yearmodel = obj.yearmodel;
		make = obj.make;
		speed = obj.speed;
	}

	~Car()
	{ 
		cout << "Destructor executed" << endl;
	}

	//seter 

	void setyearmodel(int y)
	{
		yearmodel = y;
	}

	void setmake(string m)
	{
		make = m;
	}

	void setspeed(int s)
	{
		speed = s;
	}
	void setCar(int y, string m, int s)
	{
		yearmodel = y;
		make = m;
		speed = s;
	}

	//geter
	//////////////////////////////////////////
	int getyearmodel()
	{
		return yearmodel;
	}

	string getmake()
	{
		return make;
	}

	int getspeed()
	{
		return speed;
	}
	//////////////////////////////////////////////
	void getcar()
	{
		cout << "Enter the year model:";
		cin >> yearmodel;
		cout << "Enter the make car:";
		getline(cin, make);
		cout << "Enter the speed";
		cin >> speed;
		
	}

	void PutCar()
	{
		cout << "year model: " << yearmodel << "\t";
		cout << "make: " << make << "\t";
		cout << "speed: " << speed << endl;
	}

	void accelerate()
	{
		speed+=5;
	}

	void Break()
	{
		speed-=5;
	}

};
int main()
{
	Car obj1(2021, "Suzuki alto", 40);
	Car obj2(2015, "Toyota Camry", 45);
	Car obj3(2015,"Honda Accord",80);
	Car obj4(2012,"carola",90);
	Car obj5(2020,"prius",100);
	obj2.setCar(2015, "Toyota bugati", 45);

	obj1.PutCar();
	obj2.PutCar();
	obj3.PutCar();
	obj4.PutCar();
	obj5.PutCar();
		return 0;
}