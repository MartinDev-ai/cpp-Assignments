/*MARTIN MURIMI

  CT101/G/28946/25

  COMPUTER SCIENCE

  KIRINYAGA UNIVERSITY

  */
#include <iostream>
#include <string>
using namespace std;

// Define the Book class
class Book
{
private:
    // Declare book attributes
    string title;
    string author;
    int copiesAvailable;

public:
    // Function to input book details
    void inputDetails()
    {
        cout << "Enter book title: ";
        getline(cin >> ws, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Function to borrow a book
    void borrowBook()
    {
        if (copiesAvailable > 0)
        {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        }
        else
        {
            cout << "No copies available for borrowing.\n";
        }
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n========== BOOK DETAILS ==========\n";
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
        cout << "==================================\n";
    }
};

// Main function
int main()
{
    // Create a Book object
    Book book1;

    // Input book details
    book1.inputDetails();

    // Display original book details
    cout << "\nBefore Borrowing:\n";
    book1.displayDetails();

    // Borrow a book
    book1.borrowBook();

    // Display updated book details
    cout << "\nAfter Borrowing:\n";
    book1.displayDetails();

    return 0;
}

