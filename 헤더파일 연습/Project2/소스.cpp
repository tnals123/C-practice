#include <iostream>
#include <stdexcept>
#include "Çì´õ.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
{
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
	setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setFirstName(const string& first) {
	firstName = first;
}

string BasePlusCommissionEmployee::getFirstName() const {
	return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string& last) {
	lastName = last;
}

string BasePlusCommissionEmployee::getLastName() const {
	return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void BasePlusCommissionEmployee::setGrossSales(double sales) {
	if (sales >= 0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross sales must be <=0.0");
}

double BasePlusCommissionEmployee::getGrossSales() const {
	return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) {
	if (rate > 0.0 && rate < 1.0)
		commissionRate = rate;
	else
		throw invalid_argument("commission rate mush be > 0.0 and <1.0");
}

double BasePlusCommissionEmployee::getCommissionRate() const {
	return commissionRate;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary>=0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salary must be >=0.0");
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earning() const {
	return baseSalary + (commissionRate * grossSales);
}

void BasePlusCommissionEmployee::print() const {
	cout << firstName << " " << lastName << " " << socialSecurityNumber << " " << grossSales << " " << commissionRate << " " << baseSalary;
}

int main() {
	BasePlusCommissionEmployee
		employee("bob", "lewis", "333-33-3333", 5000, 0.3, 300);
	employee.print();
}