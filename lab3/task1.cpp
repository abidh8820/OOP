#include "bits/stdc++.h"
using namespace std;

class RationalNumber {
   private:
    int numerator, denominator;

   public:
    void assign(int num, int den) {
        if (den == 0) {
            cout << "Undifined<<endl";
            return;
        }
        numerator = num;
        denominator = den;
    }

    double convert() { 
        return (double)numerator / (double)denominator;
    }

    void invert() {
        if (numerator == 0) {
            cout << "Inverttion undefined" << endl;
            return;
        }
        swap(numerator, denominator);
    }

    void print() {
        cout << "The Rational Number is " << numerator << "/" << denominator<< endl;
    }

};

int main() {
    RationalNumber a;

    a.assign(1, 2);

    a.print();
    a.invert();
    a.print();


}

