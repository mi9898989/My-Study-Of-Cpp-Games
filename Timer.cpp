#include <iostream>
#include <ctime>
using namespace std;

class Timer {
    clock_t ClockStart;

    public:
    Timer();
    ~Timer();
};

Timer::Timer() {
    ClockStart = clock();
}

Timer::~Timer() {
    clock_t ClockEnd;
    ClockEnd = clock();
    cout << "Time : " << ( ClockEnd - ClockStart ) / CLOCKS_PER_SEC << "\n";
}

int main() {
    Timer object;
    char c;

    cout << "Press a key followed by Enter: ";
    cin >> c;

    return 0;
}