/*MARTIN MURIMI

  CT101/G/28946/25

  WEEK 4 : TASK 1

  COMPUTER SCIENCE

  KIRINYAGA UNIVERSITY

  */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Main function
int main()
{
    // Declare variables
    string employeeName;
    double basicSalary, bonus, totalSalary;

    // Set decimal places to two
    cout << fixed << setprecision(2);

    // Loop through five employees
    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details for Employee " << i << endl;

        // Input employee details
        cout << "Enter employee name: ";
        getline(cin >> ws, employeeName);

        cout << "Enter basic salary: Ksh ";
        cin >> basicSalary;

        // Calculate bonus and total salary
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display employee report
        cout << "\n========== EMPLOYEE REPORT ==========\n";
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: Ksh " << basicSalary << endl;
        cout << "Bonus: Ksh " << bonus << endl;
        cout << "Total Salary: Ksh " << totalSalary << endl;
        cout << "=====================================\n";
    }

    return 0;
}

