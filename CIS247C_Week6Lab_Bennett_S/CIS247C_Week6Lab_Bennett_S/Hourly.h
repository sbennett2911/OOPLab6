/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

const double MIN_WAGE = 10;
const double MAX_WAGE = 75;
const double MIN_HOURS = 0;
const double MAX_HOURS = 50;

#include "Employee.h" //Is Employee.h neccessary????
#ifndef HOURLY_H
#define HOURLY_H
using namespace std;

class Hourly : public Employee
{
private:
	double wage;
	double hours;
	string category;

public:
	Hourly();
	Hourly(double wage, double hours, string category);
	Hourly(string fname, string lname, char gen, int dep, double wage, double hours, Benefit ben, string category);
	double calculatePay();
	void displayEmployee();
	//setters and getters
	double getWage();
	void setWage(double wge);
	double getHours();
	void setHours(double hrs);
	string getCategory();
	void setCategory(string cat);
	double getAnnualSalary();
	void setAnnualSalary(double wage, double hours); //added to override set annual salary from Employee class.
};

#endif