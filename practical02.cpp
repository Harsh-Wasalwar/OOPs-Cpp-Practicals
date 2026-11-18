#include <iostream>
using namespace std;

class BankAccount {
    int accountNo, balance;

public:
    BankAccount() {
        accountNo = 101;
        balance = 10000;
    }

    void deposit(int amount) {
        balance = balance + amount;
    }

    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj;

    obj.deposit(100);
    obj.display();

    return 0;
}