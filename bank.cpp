#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

class bank
{
    char name[100], ad[100], y;
    int balance, amount;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account()
{
    system("cls");
    cout << "Enter your full name :";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your address :";
    cin.getline(ad, 100);
    cout << "What type of account you want to open saving (s) or current (c) : ";
    cin >> y;
    cout << "Enter amount for deposit :";
    cin >> balance;
    cout << "Congratulations " << name << "!!, your account is created ";
}

void bank::deposite_money()
{
    int a;
    cout << "Enter how much money you want to deposit : ";
    cin >> a;
    balance += a;
    cout << "Your deposited amount: " << a << endl;
    cout << "Balance: " << balance;
}

void bank::display_account()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << ad << endl;
    cout << "Type of account: " << y << endl;
    cout << "Balance: " << balance << endl;
}

void bank::withdraw_money()
{
    cout << "Enter your amount for withdrawing : ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insufficient balance!\n";
    }
    else
    {
        balance -= amount;
        cout << "Now your total amount left: " << balance;
    }
}

int main()
{
    int ch;
    char x;
    bank obj;
    system("cls");
    system("color 0A");
    do
    {
        cout << "Welcome to Shubh Bank Of India \n";
        cout << "01) Open account \n";
        cout << "02) Deposit money \n";
        cout << "03) Withdraw money \n";
        cout << "04) Display account\n";
        cout << "05) Exit\n";
        cout << "Please, select the option from above: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            obj.open_account();
            break;
        case 2:
            obj.deposite_money();
            break;
        case 3:
            obj.withdraw_money();
            break;
        case 4:
            obj.display_account();
            break;
        case 5:
            exit(0);
        default:
            cout << "Please try again!! ❌\n";
        }

        cout << "\nDo you want to select next step then please press : y\n";
        cout << "If you want to exit then please press: n\n";
        x = getch();
        if (x == 'n' || x == 'N')
            exit(0);

    } while (x == 'y' || x == 'Y');

    getch();
    return 0;
}
