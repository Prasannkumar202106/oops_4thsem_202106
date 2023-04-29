#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class bank
{
    int acno;
    char nm[100], acctype[100];
    float bal;

public:
    bank(int acc_no, char *name, char *acc_type, float balance) // Parameterized Constructor
    {
        acno = acc_no;
        strcpy(nm, name);
        strcpy(acctype, acc_type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit() // depositing an amount
{
    int dep1;
    cout << "\n Enter Deposit Amount = ";
    cin >> dep1;
    bal += dep1;
}
void bank::withdraw() // withdrawing an amount
{
    int with1;
    cout << "\n Enter Withdraw Amount = ";
    cin >> with1;
    if (with1 > bal)
        cout << "\n Cannot Withdraw Amount";
    bal -= with1;
}
void bank::display() // displaying the details
{
    cout << "\n Account No. : " << acno;
    cout << "\n Name : " << nm;
    cout << "\n Account Type : " << acctype;
    cout << "\n Balance : " << bal;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter Details: \n";
    cout << "\n Account No. ";
    cin >> acc_no;
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(acc_no, name, acc_type, balance); // object is created
    b1.deposit();                             //
    b1.withdraw();                            // calling member functions
    b1.display();                             //
    return 0;
}