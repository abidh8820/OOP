#include <iostream>
using namespace std;

class Time {
   private:
    int hour, minute, second;

   public:
    int hours() { 
        return hour;
    }
    int minutes() { 
        return minute;
    }
    int seconds() { 
        return second;
    }
    void reset(int h, int m, int s) {
        hour = h, minute = m, second = s;
    }
    void advance(int h, int m, int s) {
        second += s;
        minute += second / 60 + m;

        second %= 60;
        hour += h + minute / 60;

        minute %= 60;
        hour %= 24;
    }
    void print(){
        cout<<"Hour: "<<hour;
        cout<<" Minute: "<<minute;
        cout<<" Second: "<<second<<endl;
    }
};
int main() {

    Time a;
    a.reset(23, 30, 30);
    a.print();

    a.advance(2, 30, 30);
    a.print();

}

