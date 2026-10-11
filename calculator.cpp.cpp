/*Martin Murimi

  CT101/G/28946/25

  WEEK 2 Activity : Task 3;

  Computer science

  Kirinyaga university
  */


#include <iostream>
using namespace std;

int main() {
    //declare variables for two numbers and an operator
    double num1, num2, result = 0;
    char op;

    //prompt user to enter the values
    cout << "---Ruiru Electronic Shop calculator---" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+,-,*,/):";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    bool validoperation = true;

    //use switch statement to perform the selected operation.
    switch(op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        //ensure division by zero is handled
        if(num2 != 0) {
            result = num1/num2;
        } else{
        cout << "Error: Division by zero is not allowed!\n";
        validoperation = false;
        }
        break;
    default:
        cout << "Error: Invalid operator entered!\n";
        validoperation = false;
        break;

    }
    //display the result of the operation
    if(validoperation) {
        cout << "Result = "<<num1 <<""<<op<<""<<num2 <<"="<<result<<endl;
    }
    return 0;
}

