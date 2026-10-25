/*MARTIN MURIMI

  CT101/G/28946/25

  WEEK 4 : TASK 3

  COMPUTER SCIENCE

  KIRINYAGA UNIVERSITY
  */
#include <iostream>
#include <string>
using namespace std;

// Main function
int main()
{
    // Declare predefined login credentials
    string correctUsername = "admin";
    string correctPassword = "12345";

    // Declare variables for user input
    string username, password;

    // Repeat until the correct credentials are entered
    do
    {
        // Prompt the user to enter credentials
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        // Check the entered credentials
        if (username == correctUsername && password == correctPassword)
        {
            cout << "Access Granted\n";
        }
        else
        {
            cout << "Incorrect credentials, try again\n";
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}

