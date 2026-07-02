#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    Student s;

    cout << "===== Student Record Management System =====" << endl;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore(); // Ignore newline character

    cout << "Enter Student Name: ";
    cin.getline(s.name, 50);

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\n===== Student Record =====" << endl;
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Marks       : " << s.marks << endl;

    if(s.marks >= 33)
        cout << "Result      : Pass" << endl;
    else
        cout << "Result      : Fail" << endl;

    return 0;
}