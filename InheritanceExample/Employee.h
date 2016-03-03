#include<string>
using namespace std;

//Base Class
class Employee
{
	string name;
	double salary;
	int yearHired;

public:
	//constructor
	Employee(){
			name = "";
			salary = 0.0;
			yearHired = 0;
	}

	//accessors
	string getName(){
		return name;
	}

	double getSalary(){
		return salary;
	}

	int getYearHired(){
		return yearHired;
	}

	//mutators
	void setName(string n){
		name = n;
	}

	void setSalary(double s){
		salary = s;
	}

	void setYearHired(int y){
		yearHired = y;
	}

	//prints employee information
	void printInfo(){
		cout << "Name: " << getName() << endl;
		cout << "Salary: " << getSalary() << endl;
		cout << "Year Hired: " <<getYearHired() << endl;
		cout << endl;
	}

	//function to change any employee's record
	void changeInfo(){
		cout << "Name: ";
		cin.ignore();
		getline(cin,name);
		cout << "Salary: ";
		cin >> salary;
		cout << "Year Hired: ";
		cin >> yearHired;
		cout << endl;
	}
};