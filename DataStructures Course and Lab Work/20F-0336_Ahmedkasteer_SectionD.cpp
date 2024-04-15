#include <iostream>
#include<string>
using namespace std;
class factory
{
private:
	int factoryID;
	string factorylocation;
public:
	int numberOfVehicles;
	int vehicleParts;
	void setfactoryID()
	{
		cout << "Enter factoryID" << endl;
		cin >> factoryID;
	}
	void getFactoryID()
	{
		cout << "factory id is: " << factoryID << endl;
	}
	void setfactorylocation()
	{
		cout << "Enter factory Location" << endl;
		cin >> factorylocation;
	}
	void getFactorylocation()
	{
		cout <<"factory location is: " <<  factorylocation << endl;
	}
	void setnumberOfVehicles()
	{
		cout << "Enter no. of vehicles" << endl;
		cin >> numberOfVehicles;
	}
	void getnumberofvehicles()
	{
		cout << "Number of vehicles is: " << numberOfVehicles << endl;
	}
	void setVehicleParts()
	{
		cout << "Enter vehicle parts" << endl;
		cin >> vehicleParts;
	}
	void getvehicleparts()
	{
		cout << "number of vehicles parts: " << vehicleParts << endl;
	}
};
class vehicle : public factory
{
private:
	int vehicleID;
	int chasisNumber;
	string color;
	bool rearWheel;

public:
	string manufacturer;
	vehicle()
	{
		 int vehicleID = 0;
		 int chasisNumber = 0;
		 string color = "";
		 bool rearWheel= false;
	}
	 vehicle(int a, int b, string c, bool d)
	 {
		 int vehicleID = a;
		 int chasisNumber = b;
		 string color = c;
		 bool rearWheel = d;
	 }
	void setVehicleID()
	{
		cout << "Enter vehicle ID, must be greater than 0 condition required" << endl; // condition set for positive vehicle ID > 0
			cin >> vehicleID;
			if (vehicleID > 0)
			{
				vehicleID = vehicleID;
			}
			else
			{
				cout << "VehicleID could not be set." << endl; 
			}
	}
	void getVehicleID()
	{
		cout << "Vehicle ID is: " << vehicleID << endl;
	}
	void setchasisNumber()
	{
		cout << "Enter chasis ID" << endl; // condition set for positive chasis number > 0
		cin >> chasisNumber;
		if (chasisNumber > 0)
		{
			chasisNumber = chasisNumber;
		}
		else
		{
			cout << "ChasisNumber could not be set." << endl;
		}
	}
	void getchasisNumber()
	{
		cout << "CHasis number is :" << chasisNumber << endl;
		
	}
	void setcolor()
	{
		cout << "Enter vehicle color" << endl;
		cin >> color;
	}
	void getcolor()
	{
		cout << "Color is: " << color << endl;
	}
	void setrearwheel()
	{
		cout << "Enter vehicle rearwheel information, enter 1 if it is rear wheel else it will be set to front wheel" << endl;
		int x;
		cin >> x;
		if (x = 1)
		{
			rearWheel = true;
		}
		else
		{
			rearWheel = false;
		}
	}
	bool getrearwheel()
	{
		return rearWheel;
	}
	void setmanufacturer()
	{
		cout << "Enter vehicle manufacturer" << endl;
		cin >> manufacturer;
	}
	void getmanufacturer()
	{
		cout <<"Manufacturer is: " <<  manufacturer;
	}
};

int main()
{

	vehicle obj;
	factory obj1;
	obj1.setfactoryID();
	obj1.getFactoryID();
	obj1.setnumberOfVehicles();
	obj1.getnumberofvehicles();
	obj1.setfactorylocation();
	obj1.getFactorylocation();
	obj1.setVehicleParts();
	obj1.getvehicleparts();
	vehicle(001, 002, "red", false);
	obj.setVehicleID();
	obj.getVehicleID();
	obj.setchasisNumber();
	obj.getchasisNumber();
	obj.setcolor();
	obj.getcolor();
	obj.setrearwheel();
	obj.getrearwheel();
	obj.setmanufacturer();
	obj.getmanufacturer();

	return 0;
	system("pause");

}