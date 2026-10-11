/*Martin murimi

  CT101/G/28946/25

  Week 2 Activity : Task 2

  Kirinyaga University*/

#include <iostream>
#include <string>
using namespace std;

 int main() {
     //declaring variables
      string studentName;
      int studentAge;
      int examScore;

      //prompting the user to input the details
      cout << "Student Name: ";
      getline(cin, studentName);
     cout << "Student Age: ";
     cin >> studentAge;
     cout << "Exam score: ";
     cin >> examScore;
     cout << "" << endl;


     //using nested if to determine admission
     if(studentAge >= 18){
            if(examScore >= 50){
                cout << "Admitted" << endl;
            } else { //this block is for student who are 18+ but have low score
               cout << "Not Admitted: Low score " << endl ;
             }
     } else { //if age is below 18;
     cout << "Not Admitted: Under age" << endl;
      }

  //the admission decision is automatically displayed;

     return 0;
 }



