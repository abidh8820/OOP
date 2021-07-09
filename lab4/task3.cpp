#include "bits/stdc++.h"
using namespace std;

class StudentResult {
    static int passingmark;
    vector<int> marks;
    bool fail;

   public:
    void displayMarks() {
        for (int i : marks) cout << i << ' ';
        cout << endl;
    }

    void evaluate() {
        fail = false;
        for (int i : marks) {
            if (i < passingmark) {
                fail = true;  return;
            }
        }        
    }

    void setMarks() {
        cout << "Enter numbre of subjects : " << endl;
        int n; cin >> n;

        cout << "Enter " << n << " marks: " << endl;
        for (int i = 0; i < n; i++) {
            int x;   cin >> x;
            marks.push_back(x);
        }
        evaluate();
    }

    void checkPassing() {
        if (fail)  cout << "The student has failed" << endl;
        else  cout << "The student has passed" << endl;
    }
};

int StudentResult::passingmark = 40;

int main() {}

