#include "iostream"
#include "string"
using namespace std;
class Circle
{
private:
	int x;  //holds x-axis
	int y;  //holds y-axis
	float radius;  //holds radius a circle
	const static double pi; //that holds the pi value
public:
	void set_x(int xaxis)
	{
		if (xaxis >= -50 && xaxis <= 50)
		{
			x = xaxis;
		}
		else
		{
			x = 0;
		}
	}
	void set_y(int yaxis)
	{
		if (yaxis >= -50 && yaxis <= 50)
		{
			y = yaxis;
		}
		else
		{
			y = 0;
		}
	}

	void set_r(int radius )
	{
		if (radius >= 1 && radius<= 10)
		{
			this->radius= radius;
		}
		else
		{
			radius = 5;
		}
	}
	
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
	float get_r()
	{
		return radius;
	}
	double get_pi()
	{
		return pi;
	}
	Circle(int x, int y, float radius)
	{
		set_x(x);
		set_y(y);
		set_r(radius);
	}
	Circle(int x, int y)
	{
		set_x(x);
		set_y(y);
		set_r(5);
	}
	Circle(int x, float radius)
	{
		set_x(x);
		set_y(0);
		set_r(radius);
	}
	Circle()
	{
		set_x(0);
		set_y(0);
		set_r(5);
		this->pi;
	}
	Circle(Circle& obj) 
	{
		set_x(obj.x);
		set_y(obj.y);
		set_r(obj.radius);
	}
	~Circle()
	{
		cout << "destructor executed!!"<<endl;
	}
	void setcircle(int x, int y, float radius)
	{
		set_x(x);
		set_y(y);
		set_r(radius);
	}
	void getCircle()
	{
		int x1, y1;
		float r1;
		cout << "Enter the x axis:";
		cin >> x1;
		cout << "Enter the y axis:";
		cin >> y1;
		cout << "Enter the radius:";
		cin >> r1;
		set_x(x1);
		set_y(y1);
		set_r(r1);
	}
	void putCircle()
	{
		set_x(x);
		set_y(y);
		set_r(radius);
		cout << "x-axis" << "\t" << "y-axis" << "\t" << "Radius" << "\t" << "pi" << endl;
		cout << x << "\t" << y << "\t" << radius << "\t" << pi<<endl;
	}
	float getArea()
	{
		return pi * (radius * radius);

	}
	float getDiameter()
	{
		return radius * 2;
	}
	float getCircumference()
	{
		return 2 * pi * radius;
	}
	Circle addCircle(const Circle&obj)const
	{
		Circle temp;
		temp.x = x + obj.x;
		temp.y = y + obj.y;
		temp.radius = radius + obj.radius;
		return temp;
	}
	bool isEqual(const Circle& obj)const
	{
		if (this->x == obj.x && this->y == obj.y && this->radius == obj.radius)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	int findcircle( Circle arr[], const int size)
	{
		for (int i = 0;i < size;i++)
		{
			if (arr[i].isEqual(*this))
			{
				return size;
			}
		}
		return -1;
	}
	void updateCircle(Circle arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i].isEqual(*this))
			{
				arr[i].x = x;
				arr[i].y = y;
				arr[i].radius = radius;
				
			}
		}
	}
};
 const double Circle::pi=3.141593;
int main()
{
	Circle obj1[3],obj2,obj3;
	obj3.getCircle();
	obj3.putCircle();
	for (int i = 0;i < 3;i++)
	{
		obj1[i].getCircle();
	}
	
     obj2.getCircle();
	
	cout << obj2.findcircle(obj1, 3) << endl;
	obj2.updateCircle(obj1, 3);
	obj2.putCircle();

	
	return 0;
}