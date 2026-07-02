#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    cin.getline(name, 50);

    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n===== MARKSHEET =====" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Subject 1   : " << m1 << endl;
    cout << "Subject 2   : " << m2 << endl;
    cout << "Subject 3   : " << m3 << endl;
    cout << "Subject 4   : " << m4 << endl;
    cout << "Subject 5   : " << m5 << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if(percentage >= 60)
        cout << "Grade : A" << endl;
    else if(percentage >= 50)
        cout << "Grade : B" << endl;
    else if(percentage >= 40)
        cout << "Grade : C" << endl;
    else
        cout << "Grade : Fail" << endl;

    return 0;
}