/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Salaried.h"
#include "Employee.h"


Salaried::Salaried()
{
	managementLevel = 0;
}

Salaried::Salaried(string fname, string lname, char gen, int dep, double sal, Benefit ben, int manLevel) : Employee(fname, lname, gen, dep, ben)
{
	managementLevel = manLevel;
	annualSalary = sal;
}

Salaried::Salaried(double sal, int manLevel)
{
	annualSalary = sal;
	managementLevel = manLevel;
}

double Salaried::calculatePay()
{
	double bonusPay = annualSalary * ((managementLevel * BONUS_PERCENT) / 100 ); //caluclates yearly bonus.
	annualSalary = annualSalary + bonusPay; //adds yearly bonus to annual salary.
	return annualSalary / 52; //calculates weekly pay based off of annual salary including bonus.
}

void Salaried::displayEmployee()
{
	cout << "\nEmployee Information" << endl;
	cout << "________________________________________________" << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Gender: " << gender << endl;
	cout << "Dependents: " << dependents << endl;
	cout << "Annual Salary: $" << fixed << setprecision(2) << annualSalary << endl;
	cout << "Weekly Salary: $" << fixed << setprecision(2) << calculatePay() << endl;
	benefit.displayBenefits(); //display benefit information.
	cout << "\nSalaried Employee" << endl;
	cout << "Management Level: " << managementLevel << endl;
}

int Salaried::getManagementLevel()
{
	return managementLevel;
}

void Salaried::setManagementLevel(int manLevel) //will need to update this
{
	while ((manLevel < MIN_MANAGEMENT_LEVEL) || (manLevel > MAX_MANAGEMENT_LEVEL))
	{
		cout << "Invalid Entry!!" << endl;
		cout << "Valid managment levels: 0, 1, 2, or 3" << endl;
	}
	managementLevel = manLevel;
}
