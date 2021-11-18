// ATM.cpp
// Basic ATM that withdraws, deposits, and checks balance
// Created by Marcus Riccio on 11/14

#include <iostream>

using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    // Check Balance, Deposit, Withdraw, Show Menu
    int option;
    double balance = 500;
    do
    {
        showMenu();
        cout << "Choose Option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is: $" << balance << endl;
            break;
        case 2:
            cout << "Deposit amount: $";
            double deposit_amount;
            cin >> deposit_amount;
            balance += deposit_amount;
            break;
        case 3:
            cout << "Withdraw amount: $";
            double withdraw_amount;
            cin >> withdraw_amount;
            if (withdraw_amount <= balance)
                balance -= withdraw_amount;
            else
                cout << "Insufficient balance" << endl;
            break;
        }
    } while (option != 4);

    system("pause>0");
}