#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string number, string holder, double initialBalance) {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful!" << endl;
        } else {
            cout << "Invalid Deposit Amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid Withdrawal Amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInformation() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << getBalance() << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    BankAccount acc1("1001", "Adiba", 5000);
    BankAccount acc2("1002", "Rahim", 8000);

    cout << "Account 1 Information" << endl;
    acc1.displayAccountInformation();

    acc1.deposit(2000);
    acc1.withdraw(1000);

    cout << "After Transactions:" << endl;
    acc1.displayAccountInformation();

    cout << "\nAccount 2 Information" << endl;
    acc2.displayAccountInformation();

    acc2.deposit(1500);
    acc2.withdraw(2000);

    cout << "After Transactions:" << endl;
    acc2.displayAccountInformation();

    return 0;
}
