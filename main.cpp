// incomeTax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "taxCalc.h"

int main()
{
	double salary = getSalary();

	double tax = getTax(salary);

	double natInsurance = getNatInsurance(salary);

	printResults(salary, tax, natInsurance);
	
	return 0;
}
