#include <iostream>
using namespace std;

int main()
{
    int accNo, choice;
    char name[50];
    float balance = 0, amount;

    cout << "===== Bank Account System =====" << endl;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    cin.getline(name, 50);

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Amount Deposited Successfully." << endl;
                break;

            case 2:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance = balance - amount;
                    cout << "Amount Withdrawn Successfully." << endl;
                }
                else
                {
                    cout << "Insufficient Balance." << endl;
                }
                break;

            case 3:
                cout << "Account Number : " << accNo << endl;
                cout << "Account Holder : " << name << endl;
                cout << "Current Balance: " << balance << endl;
                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}