#include "stdafx.h"
#include <iostream>

double getSalary() {
	std::cout << "Enter your gross income: ";
	double salary;
	std::cin >> salary;

	return salary;
}

double getTax(double salary) {
	double tax;

	if (salary <= 11000) {
		tax = 0;
	}

	if ((salary > 11000) && (salary < 43001)) {
		tax = (salary - 11000) * 0.2;
	}

	if ((salary > 43000) && (salary < 150001)) {
		tax = (43000 - 11000) * 0.2;
		tax = tax + ((salary - 43000) * 0.4);
	}

	if (salary > 150000) {
		tax = (43000 - 11000) * 0.2;
		tax = tax + ((150000 - 43000) * 0.4);
		tax = tax + ((salary - 150000) * 0.45);
	}

	return tax;
}

double getNatInsurance(double salary) {
	double natInsurance;

	if (salary <= 8060) {
		natInsurance = 0;
	}

	if ((salary > 8060) && (salary < 43000)) {
		natInsurance = (salary - 8060) * 0.12;
	}

	if (salary >= 43000) {
		natInsurance = (43000 - 8060) * 0.12;
		natInsurance = natInsurance + ((salary - 43000) * 0.02);
	}

	return natInsurance;
}

void printResults(double salary, double tax, double natInsurance) {
	std::cout << "Your total Income Tax is: " << tax << std::endl;
	std::cout << "Your total National Insurance is: " << natInsurance << std::endl;
	std::cout << "Your net income is: " << salary - natInsurance - tax << std::endl;
}