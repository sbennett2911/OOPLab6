/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"

//function prototypes from Basic UI program week1
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
string GetInput(string inputType);
void TerminateApplication();

int main()
{
DisplayApplicationInformation();


	//BEGIN section for employeeList1.
	DisplayDivider("Employee 1");
	Employee *employeeList1 = new Salaried(10000, 3);//instantiate employee1 object using default constructor.
	
	//Prompt for user input for employeeList1 salaried employee. 
	employeeList1 -> setFirstName(GetInput("first name"));

	employeeList1 -> setLastName(GetInput("last name"));

	string gender = GetInput("gender");
	char firstCharacterGender = gender[0]; //takes value of gender, places in array, and assigns first charcter to char firstCharacterGender.
	employeeList1 -> setGender(firstCharacterGender);

	employeeList1 -> setDependents(GetInput("dependents"));
 
	employeeList1 -> setAnnualSalary(GetInput("annual salary"));

	Benefit benefitsEmployee1; //creates benefits object for employeeList1.
	benefitsEmployee1.setHealthInsurance(GetInput("health insurance"));
	benefitsEmployee1.setLifeInsurance(stod(GetInput("life insurance")));
	benefitsEmployee1.setVacation(stoi(GetInput("vacation days")));
	employeeList1 -> setBenefit(benefitsEmployee1); //passes benefit object to setter in Employee class.
	
	employeeList1 -> displayEmployee(); //display employeeList1 information.
	
	cout << "\n----Number of Employee Objects Created----" << endl; //Display number of Employee Objects created.
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.
	//END section for employeeList1.

	//BEGIN section for employeeList2.
	DisplayDivider("Employee 2");
	Employee *employeeList2 = new Hourly(50, 40, "full time");
	
	//Prompt for user input for employeeList2.
	employeeList2 -> setFirstName(GetInput("first name"));

	employeeList2 -> setLastName(GetInput("last name"));

	gender = GetInput("gender");
	firstCharacterGender = gender[0]; //obtains first character of string to pass to setGender()
	employeeList2 -> setGender(firstCharacterGender);

	employeeList2 -> setDependents(GetInput("dependents"));

	Benefit benefitsEmployee2; //creates benefit object for employeeList2.
	benefitsEmployee2.setHealthInsurance(GetInput("health insurance"));
	benefitsEmployee2.setLifeInsurance(stod(GetInput("life insurance")));
	benefitsEmployee2.setVacation(stoi(GetInput("vacation days")));
	employeeList2 -> setBenefit(benefitsEmployee2);
	
	employeeList2 -> displayEmployee();

	cout << "\n----Number of Employee Objects Created----" << endl; //dispay number of Employee objects created.
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.
	//END employeeList2 section.

	TerminateApplication();

return 0;
}

//functions defined from Basic UI week 1 lab.
void DisplayApplicationInformation()
{
	cout << "Welcome to the Employee Class Test Program." << endl;
	cout << "CIS247C, Week 5 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "Update: Employee class made abstract.  Added 2 virtual functions." << endl;
}

void DisplayDivider(string outputTitle)
{
	cout << '\n' << "******************************** " + outputTitle + " ***********************************" << endl;
}

string GetInput(string inputType)
{
	cout << "Please enter " + inputType + ": ";
	string strInput;
	getline(cin, strInput);

	return strInput;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the application!" << endl;
}