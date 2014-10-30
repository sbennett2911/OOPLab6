/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

#ifndef EMPLOYEE_H //inclusion guard
#define EMPLOYEE_H
#include "Benefit.h"
using namespace std;

class Employee
{
protected: //protected attributes
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;
	Benefit benefit; // may have to add setters and getters for this.

private:
	static int numEmployees; //static variable keeps count of total number of employees.
	
public: //member functions
	Employee(); //default constructor
	Employee(string fname, string lname, char gen, int dep, Benefit benefits); //multi-arg constructor
	virtual double calculatePay() = 0;
	virtual void displayEmployee() = 0;
	//setters and getters
	string getFirstName();
	void setFirstName(string first);
	string getLastName();
	void setLastName(string last);
	char getGender();
	void setGender(char gen);
	int getDependents();
	void setDependents(int dep);
	void setDependents(string dep);
	double getAnnualSalary();
	void setAnnualSalary(double salary);
	void setAnnualSalary(string salary);
	static int getNumEmployees();
	Benefit getBenefit();
	void setBenefit(Benefit ben);
};

#endif