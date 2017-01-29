#pragma once
#ifndef TAXCALC_H
#define TAXCALC_H

double getTax(double salary);
double getNatInsurance(double salary);
double getSalary();
void printResults(double salary, double tax, double natInsurance);

#endif