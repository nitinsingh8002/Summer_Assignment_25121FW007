#include <iostream>
using namespace std;

int main()
{
    int bookId;
    char bookName[50];
    char author[50];
    int choice;

    cout << "===== Library Management System =====" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display Book" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cin.ignore();

        cout << "Enter Book Name: ";
        cin.getline(bookName, 50);

        cout << "Enter Author Name: ";
        cin.getline(author, 50);

        cout << "\nBook Added Successfully!" << endl;

        cout << "\n===== Book Details =====" << endl;
        cout << "Book ID     : " << bookId << endl;
        cout << "Book Name   : " << bookName << endl;
        cout << "Author Name : " << author << endl;
    }
    else if(choice == 2)
    {
        cout << "No Book Record Available!" << endl;
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}