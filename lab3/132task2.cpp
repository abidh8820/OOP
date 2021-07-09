#include "bits/stdc++.h"
using namespace std;

class Medicine {
   private:
    string name, genericName;
    double discountPercent, unitPrice;

   public:

    Medicine() {
        discountPercent = 5.0;
        unitPrice = 0;
    }
    void assignName(char *nam, char *gName) {
        name = nam;
        genericName = gName;
    }

    void assignPrice(double price) {
        if (price >= 0) unitPrice = price;
    }

    void setDiscountPercent(double percent) {
        if (percent <= 45 && percent >=0) discountPercent = percent;
    }

    double getSellingPrice(int nos) {
        return (double)nos * (100 - discountPercent) / 100;
    }

    void display() {
         cout<<name<<" ("<<genericName<<") has unit price BDT "<<fixed<<setprecision(2)<<unitPrice<<". Current dicount"<<setprecision(0)<<" "<<discountPercent<<"%"<<endl;
    }
};
int main() {
    Medicine a;

    char med[] = "Napa";
    char medgen[] ="Paracetamol";

    a.assignName(med, medgen);

    a.assignPrice(.8);
    a.setDiscountPercent(25);

    cout<<a.getSellingPrice(100)<<endl;
    a.display();
}

