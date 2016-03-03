#include<iostream>
#include <sstream>
using namespace std;

#include "Manager.h"

//Main Function
int main(void){
	int userInput;
	char c=' ';
	stringstream ss;//used for concatenating employee name

	Manager manager1, manager2;

	//initializing manager 1
	manager1.setName("Ryan");
	manager1.setSalary(50000);
	manager1.setYearHired(2005);

	//initializing manager 2
	manager2.setName("Paul");
	manager2.setSalary(60000);
	manager2.setYearHired(2003);

	Employee em[10];

	//just initializing arbitary information to initialize employees
	//and also setting the staff for the managers

	for (int i = 0; i <10; i++){
		ss << "Employee" << i;//concatenating
		em[i].setName(ss.str());
		em[i].setSalary(i * 10);
		em[i].setYearHired(2016 - i);
		if (i < 5)
			manager1.setStaff(em[i]);//setting staff
		else
			manager2.setStaff(em[i]);//setting staff
		ss.str("");//resetting for next iteration
	}

	//for user to output employee records and change it if user prefers
	while (c != 'Q' || c != 'q'){
		cout << "\t\t\t\nEmployee Database System\n";
		cout << "Press 1 - 10 for Employee1-10 Information\n";
		cout << "Press 11 or 12 for Manager1/Manager2 Information\n";
		cout << "Press 13 or 14 for Manager1/Manager2 Staffs Information\n";
		cout << "Your Choice: ";
		cin >> userInput;

		if (userInput > 0 && userInput <= 10){
			em[userInput - 1].printInfo();
			cout << "Do you want to change any information. Press 't' for change" << endl;
			cin >> c;
			if (c == 't' || c == 'T')
				em[userInput - 1].changeInfo();//to change any information for Employees
		}
		else if (userInput == 11)
			manager1.printInfo();//getting manager's info
		else if (userInput == 12)
			manager2.printInfo();//getting manager's info
		else if (userInput == 13)
			manager1.getStaff();//getting staff info
		else if (userInput == 14)
			manager2.getStaff();//getting staff info
		else
			cout << "Not a Valid Input" << endl;

		cout << "Press 'q' to quit or any key to continue:";
		cin >> c;
	}
	system("pause");
	return 0;
}