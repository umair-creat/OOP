#include "iostream"

#include "string"

using namespace std;

class Employee

{

private:

	string name;     //name that holds the employee name.

	int id;         //id that holds the empolyee id.

	string department;   //department that holds the department where employee work.

	string position;     //position that holds the empolyee job titel.
	
public:
	//////////////////////////Parameterized constructor//////////////////////
	Employee(string employee_name, int employee_id, string employee_department, string employee_position)
	{
		name = employee_name;
		id = employee_id;
		department = employee_department;
		position = employee_position;
	}
	
	////////////////////////defult constructor /////////////////////////////

	Employee()
	{
		name = " ";
		id = 0;
		department = " ";
		position = " ";
	}
	///////////////////////////////////////////////////////////////////
	Employee(string employee_name, int employee_id)
	{
		name = employee_name;
		id = employee_id;
		department = " ";
		position = " ";
	}
	 
	 
	 
	
	////////////////////////copy constructor////////////////////////////

	Employee(const Employee& emp1)
	{
		name = emp1.name;
		id = emp1.id;
		department = emp1.department;
		position = emp1.position;
	}
	////////////////////////Destructor///////////////////////////////

	~Employee()
	{
		cout << "Destructor exexcuted"<<endl;
	}
	///////////////////seter///////////////////

	void set_name(string emp_name)
	{
		name = emp_name;
	}

	void set_id(int emp_id)
	{
		if (emp_id < 0)
		{
			emp_id = 0;
		}
		else
		{
			id = emp_id;
		}
		
	}

	void set_department(string emp_department)
	{
		department = emp_department;
	}

	void set_position(string emp_position)
	{
		position  = emp_position;
	}
    ///////////////////geter///////////////////

	string get_name(string emp_name)
	{
		return emp_name;
	}

	int  get_id(int  emp_id)
	{
		return emp_id;
	}

	string get_department(string emp_department)
	{
		return emp_department;
	}

	string get_position(string emp_position)
	{
		return emp_position;
	}
	//////////////// setinformation//////////////////////////

	void setinfo(string employee_name, int employee_id, string employee_department, string employee_position)
	{
		name = employee_name;
		id = employee_id;
		department = employee_department;
		position = employee_position;
	}
	/////////////////getinformation/////////////////////

	void getinfo()
	{
		cout << "Enter the name of employee:";
		getline(cin, name);

		cout << "Enter the id of the employee:";
		cin >> id;
		cin.ignore();
		cout << "Enter the department where the employee works:";
		getline(cin, department);
		

		cout << "Enter the position of the department:";
		getline(cin, position);
	}
	void putinfo()
	{
		cout << "Name\t\tid number\tDepartment\tposition" << endl;
		cout << name << "\t";
		cout << id << "\t\t";
		cout << department << "\t\t";
		cout<< position << endl;

	}
};
int main()
{
	Employee emp1,emp2,emp3;

	//////////using seter function////
	
	//emp1.set_name("ahmad");
	// 
	//emp1.set_id(78);
	// 
	//emp1.set_department("IT");
	// 
	//emp1.set_position("professer");
	// 
	//emp1.putinfo();
	// 
	////////////// using paramitrized constructer//////////////////

	emp2.setinfo("umair yousaf", 57, "IT", "TOP");

	emp2.putinfo();

	/////////////////copy constructer ////////////////////
	// 
	//emp3 = emp2;
	// 
	//emp3.putinfo();
	// 
	///////////////get value from user///////////////////
	// 
	//emp3.getinfo();
	// 
	//emp3.putinfo();
	// 
	/////////////geter function///////////////////////
	// 
	//Employee emp4;
	// 
	//cout << "Name\t\t" << "id\t\t" << "Department\t\t" << "position" << endl;
	// 
	//cout << emp4.get_name("awais")<<"\t\t";
	// 
	//cout << emp4.get_id(88) << "\t\t";
	// 
	//cout << emp4.get_department("DS") << "\t\t";
	// 
	//cout << emp4.get_position("professer") <<endl;

	return 0;

}