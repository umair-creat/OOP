#include "iostream"
#include "string"
#include "math.h"
using namespace std;
class Cuboids
{
private:
	float height;   //height that holds cuboids height
	float width;   //width that holds cuboids width
	float depth;  //depth that holds cuboids depth
public:

	//////////////////mutators function means seter function///////////////////////////
	void set_height(float H)
	{
		if (H > 0.0&& H < 35.00)
		{
			height = H;
		}
		else
		{
			height = 0;
		}
	}

	void set_width(float W)
	{
		if (W > 0 && W< 35.00)
		{
			width= W;
		}
		else
		{
			width= 0;
		}
	}
	void set_depth(float D)
	{
		if (D> 0 && D < 35.00)
		{
			depth = D;
		}
		else
		{
			depth = 0;
		}
	}
	/////////////////////////////////accessor function means geter//////////////////
	float get_height()
	{
		return height;
	}
	float get_width()
	{
		return width;
	}
	float get_depth()
	{
		return depth;
	}
	///////////////////////////////paramitrized constructer ////////////////////////
	Cuboids(float H, float W, float D)
	{
		void set_height();
		void set_width();
		void set_depth();
		height = H;
		width = W;
		depth = D;
	}
	Cuboids(float H, float W)
	{
		height = H;
		width = W;
		depth = 0;
	}
	//////////////////////////////defult constructer /////////////////////////
	Cuboids()
	{
		height = 0.0;
		width = 0.0;
		depth = 0.0;
	}
	/////////////////////////////copy constructer ////////////////////////
	Cuboids(const Cuboids& cub)
	{
		void set_height();
		void set_width();
		void set_depth();
		height = cub.height;
		width = cub.width;
		depth = cub.width;
	}
	///////////////////////////distructer //////////////////////////////
	
	~Cuboids()
	{
		cout << "“Destructor executed...”" << endl;
	}
	////////////////////////implimentation/////////////////////
	void setCuboids(float h, float w, float d)
	{
		height = h;
		width = w;
		depth = d;
		 set_height(height);
		 set_width(width);
		 set_depth(depth);
	}
	void getCuboids()
	{
		cout<< "Enter the height:";
		cin >> height;
		cout << "Enter the width:";
		cin >> width;
		cout << "Enter the depth";
		cin >> depth;
		cout << endl;
	}
	void putCuboids()
	{
		 set_height(height);
		set_width(width);
		 set_depth(depth);
		cout << "The cuboids height is:" <<height<<endl;
		cout << "The cuboids width is:" <<width<< endl;
		cout << "The cuboids depth is:" <<depth<< endl;
	}
	float getSurfaceArea()
	{
		set_height(height);
		set_width(width);
		set_depth(depth);
		float surface = 0.0;
		surface = 2 * (height * width) + 2 * (height * depth) + 2 * (width * depth);
		return surface;
	}
	float getVolume()
	{
		set_height(height);
		set_width(width);
		set_depth(depth);
		float volume = 0.0;
		volume = height * width * depth;
		return volume;
	}
	float getspaceDiagonal()
	{
		set_height(height);
		set_width(width);
		set_depth(depth);
		float diagonal = 0.0;
		diagonal = sqrt((height * height) + (width * width) + (depth * depth));
		return diagonal;
	}
	void putCuboidsinfo(float surfacearea, float volume, float diagonal)
	{
		cout << "HEIGHT\t\tWIDTH\t\tDEPTH" << endl;
		cout << height << "\t\t" << width << "\t\t" << depth << endl;
		cout << "Surface-area\t" << "volume\t" << "spaceDiagonal" << endl;
		cout << surfacearea << "\t\t" << volume << "\t\t" << diagonal << endl;
	}
};
	int main()
	{
		float surface = 0.0, volume = 0.0, diagonal = 0.0;
		Cuboids exp1, exp2, exp3;
		float height1 = 70, width1 = 35, depth1 = 30;
		exp1.setCuboids(height1, width1, depth1);
		exp1.putCuboids();
		cout << endl;
		/*exp2.getCuboids();
		exp2.putCuboids();                                  //Test the functionality
		cout << endl;
		surface = exp2.getSurfaceArea();
		volume = exp2.getVolume();
		diagonal = exp2.getspaceDiagonal();
		exp2.putCuboidsinfo(surface, volume, diagonal);
		exp3.set_height(33.0);
		exp3.set_width(34.0);
		exp3.set_depth(23.79);
		surface = exp3.getSurfaceArea();
		volume = exp3.getVolume();
		diagonal = exp3.getspaceDiagonal();
		exp3.putCuboidsinfo(surface, volume, diagonal);*/
		return 0;
	}