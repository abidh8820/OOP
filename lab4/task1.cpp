#include "bits/stdc++.h"
using namespace std;

class BankAccount {
    long long acnum;
    double bal, minbal;
    string acholder_name, actype;

   public:
    BankAccount(long long acnum_, string acholder_name_, string actype_, double bal_, double minbal_) {
        acnum = acnum_;
        acholder_name = acholder_name_;
        actype = actype_;
        bal = bal_;
        minbal = minbal_;
    }
    void setvalues(long long acnum_, string acholder_name_, string actype_, double bal_, double minbal_) {
        acnum = acnum_;
        acholder_name = acholder_name_;
        actype = actype_;
        bal = bal_;
        minbal = minbal_;
    }

    void show() {
        cout << "Account number: " << acnum << endl;
        cout << "Account holder name: " << acholder_name << endl;
        cout << "Account type: " << actype << endl;
        cout << "Current balance: " << bal << endl;
        cout << "Minimum balance: " << minbal << endl;
    }

    void showBalance() { cout << "Current balance: " << bal << endl; }

    void deposit(int x) { bal += x; }

    void withdrawl(int x) {
        if (bal - x < minbal) {
            cout << "Cannot go beyond the minimum balance" << endl;
            return;
        }
        bal -= x;
    }

    void giveInterest(int p = 3) {
        double interest = bal * 1.0* p / 100;
        //bal += interest * .9;
        deposit(interest*.9);
    }

    ~BankAccount() {
        cout << "Accont of " << acholder_name << " with account no : " << acnum
             << " is destroyed with a balance BDT: " << (int)bal << endl;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    BankAccount a(11,"abid","savings",400,100);
    a.deposit(100);
    a.withdrawl(1000);
    a.giveInterest();
    a.show();
    a.show();

}

