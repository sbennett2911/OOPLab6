/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

const int MIN_MANAGEMENT_LEVEL = 0;
const int MAX_MANAGEMENT_LEVEL = 3;
const double BONUS_PERCENT = 10;
#include "Employee.h" //Is Employee.h neccesary???

#ifndef SALARIED_H
#define SALARIED_H
using namespace std;

class Salaried : public Employee
{
private:
	int managementLevel;

public:
	Salaried(); //default constructor
	Salaried(string fname, string lname, char gen, int dep, double sal, Benefit ben, int manLevel); //multi-arg constructor
	Salaried(double sal, int manLevel); //multi-arg constructor
	double calculatePay(); //returns weekly pay based on annual salary + bonus based on management level.
	void displayEmployee();
	//setters and getters.
	int getManagementLevel();
	void setManagementLevel(int manLevel);
};


#endif