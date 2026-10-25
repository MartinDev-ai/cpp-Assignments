/*MARTIN MURIMI

  CT101/G/28946/25

  WEEK 3 : TASK 2.

  COMPUTER SCIENCE

  KIRINYAGA UNIVERSITY

  */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declare customer details and billing variables
string customerName;
double unitsConsumed, totalBill, discount, finalAmount;
const double RATE_PER_UNIT = 50;

// Function to get customer details
void getCustomerDetails()
{
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

// Function to calculate the water bill
void calculateBill()
{
    totalBill = unitsConsumed * RATE_PER_UNIT;
}

// Function to apply a discount
void applyDiscount()
{
    if (unitsConsumed > 100)
    {
        discount = totalBill * 0.10;
    }
    else
    {
        discount = 0;
    }

    finalAmount = totalBill - discount;
}

// Function to display the water bill
void displayBill()
{
    cout << "\n========== WATER BILL ==========\n";
    cout << fixed << setprecision(2);
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Rate Per Unit: Ksh " << RATE_PER_UNIT << endl;
    cout << "Total Bill Before Discount: Ksh " << totalBill << endl;
    cout << "Discount: Ksh " << discount << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
    cout << "================================\n";
}

// Main function
int main()
{
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}

