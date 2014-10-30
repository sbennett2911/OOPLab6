/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Hourly.h"
#include "Employee.h"

Hourly::Hourly()
{
	wage = 0;
	hours = 0;
	category = "Unknown";
}

Hourly::Hourly(double wge, double hrs, string cat)
{
	wage = wge;
	hours = hrs;
	category = cat;
}

Hourly::Hourly(string fname, string lname, char gen, int dep, double wge, double hrs, Benefit ben, string cat) : Employee(fname, lname, gen, dep, ben)
{
	wage = wge;
	hours = hrs;
	category = cat;
}

double Hourly::calculatePay() //returns weekly pay calculated from hourly wage and hours worked.
{
	return wage * hours;
}

void Hourly::displayEmployee()
{
	cout << "\nEmployee Information" << endl;
	cout << "________________________________________________" << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Gender: " << gender << endl;
	cout << "Dependents: " << dependents << endl;
	setAnnualSalary(wage, hours);
	cout << "Annual Salary: $" << fixed << setprecision(2) << annualSalary << endl;
	cout << "Weekly Salary: $" << fixed << setprecision(2) << calculatePay() << endl;
	benefit.displayBenefits();
	cout << "\nHourly Employee" << endl;
	cout << "Category: " << category << endl;
	cout << "Wage: " << wage << endl;
	cout << "Hours: " << hours << endl;
}

double Hourly::getWage()
{
	return wage;
}

void Hourly::setWage(double wge)
{
	wage = wge;
}

double Hourly::getHours()
{
	return hours;
}

void Hourly::setHours(double hrs)
{
	hours = hrs;
}

string Hourly::getCategory()
{
	return category;
}

void Hourly::setCategory(string cat)
{
	category = cat;
}

double Hourly::getAnnualSalary()
{
	return annualSalary;
}

void Hourly::setAnnualSalary(double wage, double hours) //will need to update later
{
	while ((wage < MIN_WAGE) || (wage > MAX_WAGE))
	{
		cout << "Invalid Entry!!" << endl;
		cout << "Valid range for wages: $10 to $75" << endl;
	}

	while ((hours < MIN_HOURS) || (hours > MAX_HOURS))
	{
		cout << "Invalid Entry!!" << endl;
		cout << "Valid number of hours worked: 0 to 50" << endl;
	}

	annualSalary = wage * hours * 50;
}
