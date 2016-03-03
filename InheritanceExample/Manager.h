#include "Employee.h"
#include<vector>

//Derived Class
class Manager : public Employee
{
	vector<Employee> staff;//using vectors to store staff
	
	public:
		//function to set the staffs to each employee
		void setStaff(Employee e){
			staff.push_back(e);
		}

		//to get the staffs info
		void getStaff(){
			for (int i = 0; i < 5; i++){
				staff[i].printInfo();
			}
		}

};