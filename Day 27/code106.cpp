#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee e;

    cout << "===== Employee Management System =====" << endl;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cin.ignore();   // Ignore newline

    cout << "Enter Employee Name: ";
    cin.getline(e.name, 50);

    cout << "Enter Employee Salary: ";
    cin >> e.salary;

    cout << "\n===== Employee Details =====" << endl;
    cout << "Employee ID     : " << e.id << endl;
    cout << "Employee Name   : " << e.name << endl;
    cout << "Employee Salary : " << e.salary << endl;

    return 0;
}