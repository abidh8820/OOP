#include "bits/stdc++.h"
using namespace std;

class Epm {
    string Empname;
    int id, age;
    double salary;

    string getStatus() {
        if (age <= 25 && salary <= 20000) return "Low";
        if (age <= 25 && salary > 20000) return "Moderate";
        if (age > 25 && salary <= 21000) return "Low";
        if (age > 25 && salary > 21000 && salary <= 60000) return "Moderate";
        return "High";
    }

   public:
    void FeedInfo() {
        cout << "Enter Name: " << endl;
        cin >> Empname;
        cout << "Enter ID : " << endl;
        cin >> id;
        cout << "Enter age: " << endl;
        cin >> age;
        cout << "Enter salary" << endl;
        cin >> salary;
    }

    void ShowInfo() {
        cout << "Name : " << Empname << endl;
        cout << "ID: " << id << endl;
        cout << "Age : " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Status: " << getStatus() << endl;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Epm a;
    a.FeedInfo();
    a.ShowInfo();
}

