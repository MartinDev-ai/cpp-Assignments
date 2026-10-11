/* Martin Murimi.

   CT101/G/28946/25.

   Week 2 activity : Task 1.

   Computer science.

   Kirinyaga university*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    //Declaring variables.
    string studentName;
    int studentMarks;
    char grade;

    //prompting the user to enter the required details
    cout << "Student Name: ";
    getline(cin, studentName);
    cout << "Student marks: ";
    cin >> studentMarks;

    //using if-else ladder to assign grades
    if(studentMarks >= 70 && studentMarks <= 100){
            grade = 'A';
    } else if(studentMarks >= 60 && studentMarks <= 69){
             grade = 'B';
    } else if(studentMarks >= 50 && studentMarks <= 59){
             grade = 'C';
    } else if(studentMarks >= 40 && studentMarks <= 49){
            grade = 'D';
    } else {
            grade = 'E';
    }

    //displaying the student name, marks and the corresponding grade
    cout << "" << endl;
    cout << "Student Details " << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Student Marks: " << studentMarks << endl;
    cout << "Student Grade: " << grade << endl;

    return 0;
}
