/*MARTIN MURIMI

 WEEK 4 : TASK 2

 CT101/G/28946/25

 COMPUTER SCIENCE

 KIRINYAGA UNIVERSITY

 */
#include <iostream>
#include <iomanip>
using namespace std;

// Main function
int main()
{
    // Declare variables
    double balance, withdrawalAmount;

    // Input initial account balance
    cout << "Enter account balance: Ksh ";
    cin >> balance;

    // Set decimal places to two
    cout << fixed << setprecision(2);

    // Continue while the balance is greater than zero
    while (balance > 0)
    {
        // Input withdrawal amount
        cout << "\nEnter withdrawal amount: Ksh ";
        cin >> withdrawalAmount;

        // Stop if withdrawal exceeds the balance
        if (withdrawalAmount > balance)
        {
            cout << "Insufficient balance. Withdrawal stopped.\n";
            break;
        }

        // Stop if the withdrawal amount is invalid
        if (withdrawalAmount <= 0)
        {
            cout << "Enter a valid withdrawal amount.\n";
            continue;
        }

        // Deduct withdrawal from balance
        balance = balance - withdrawalAmount;

        // Display remaining balance
        cout << "Remaining balance: Ksh " << balance << endl;

        // Stop if the balance becomes zero
        if (balance == 0)
        {
            cout << "Your balance is zero. Withdrawal stopped.\n";
        }
    }

    return 0;
}
