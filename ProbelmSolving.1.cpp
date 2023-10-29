//a software developing  company provides annual  bonus to the employees in accordance
//with their  years of services.
//write a c++ program  that takes the joining year and monthly salary as inputs .
//Afterwards ,the problem calculates and prints the year  of service and the annual salary.
//If the difference between the joining  year and the current year (2023) is above 3 years ,
//then the employee will get 4.5% bonus with their  annual salary  .
//if the  year of the service  is between 2-3 years  than the employee will get 2.5% bonus
//with their annual salary.
//Lastly, if the year of services is 1, than the employee  will get 1.4% bonus
//with their  annual salary.
//Otherwise ,the employees won't get any bonus .Now find and print employee's
//annual salary after bonus.
#include <iostream>
using namespace std;

int main()
{
    int joiningYear, currentYear;
    double monthlySalary, annualSalary, bonus = 0.0;

    // Input the joining year and monthly salary
    cout << "Enter the joining year: ";
    cin >> joiningYear;
    cout << "Enter the monthly salary: $";
    cin >> monthlySalary;

    // Calculate the current year (assuming the current year is 2023)
    currentYear = 2023;

    // Calculate the years of service
    int yearsOfService = currentYear - joiningYear;

    // Calculate bonus based on years of service
    if (yearsOfService > 3) {
        bonus = 0.045 * annualSalary;
    } else if (yearsOfService >= 2 && yearsOfService <= 3) {
        bonus = 0.025 * annualSalary;
    } else if (yearsOfService == 1) {
        bonus = 0.014 * annualSalary;
    }

    // Calculate the annual salary
    annualSalary = 12 * monthlySalary + bonus;

    // Display the results
    cout << "Years of Service: " << yearsOfService << " years" << endl;
    cout << "Annual Salary (including bonus): $" << annualSalary << endl;

    return 0;
}
