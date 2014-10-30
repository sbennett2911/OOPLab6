/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 6 Lab
  Date: June 14, 2013
  Update: Program modified to make Employee class abstract. Added 2 virtual functions.*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Benefit.h"

Benefit::Benefit() //default constructor
{
	healthInsurance = "Not Given";
	lifeInsurance = 0.0;
	vacation = 0;
}

Benefit::Benefit(string health, double life, int vaca) //multi-arg constructor
{
	healthInsurance = health;
	lifeInsurance = life;
	vacation = vaca;
}

void Benefit::displayBenefits() //need to figure out how to right justify values.
{
	cout << "\nBenefit Information" << endl;
	cout << "____________________________________________" << endl;
	cout << "Health Insurance: " << healthInsurance << endl;
	cout << "Life Insurance: $" << setprecision(2) << showpoint << fixed << lifeInsurance << endl;
	cout << "Vacation: " << vacation << " days" << endl;
}

string Benefit::getHealthInsurance()
{
	return healthInsurance;
}

void Benefit::setHealthInsurance(string healthIns)
{
	healthInsurance = healthIns;
}

double Benefit::getLifeInsurance()
{
	return lifeInsurance;
}

void Benefit::setLifeInsurance(double lifeIns)
{
	lifeInsurance = lifeIns;
}

int Benefit::getVacation()
{
	return vacation;
}

void Benefit::setVacation(int vaca)
{
	vacation = vaca;
}
