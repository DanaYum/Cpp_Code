#include <iostream>
#include <iomanip>
using namespace std;
class Clock {
private:
    int hours;
    int minutes;
    int seconds;

    public:
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void displayTime() {
        cout << setfill('0') << setw(2) << hours << ":"<< setw(2) << minutes << ":" << setw(2) << seconds << endl;
    }
};

int main() {
    int hours, minutes, seconds;
    cin >> hours >> minutes >> seconds;

    Clock clock(hours, minutes, seconds);

    clock.displayTime();

    return 0;
}
