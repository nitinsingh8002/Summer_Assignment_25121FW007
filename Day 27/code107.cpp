#include <iostream>
using namespace std;

int main()
{
    int empId;
    char name[50];
    float basicSalary, bonus, totalSalary;

    cout << "===== Salary Management System =====" << endl;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    cin.getline(name, 50);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    totalSalary = basicSalary + bonus;

    cout << "\n===== Salary Details =====" << endl;
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "Bonus         : " << bonus << endl;
    cout << "Total Salary  : " << totalSalary << endl;

    return 0;
}