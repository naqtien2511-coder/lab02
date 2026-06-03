#include "main.h"
#include <iostream>
#include <format>
#include <print>
using namespace std;
using namespace chrono;

sys_days getToday() {
    return floor<days>(system_clock::now());
}

sys_days getNextDay() {
    return getToday() + days{1};
}

void printDates() {
    sys_days today = getToday();
    sys_days nextDay = getNextDay();

    cout << "Current date (VN format): "
         << format("{:%d/%m/%Y}", today)
         << '\n';

    cout << "Next date (US format): "
         << format("{:%m/%d/%y}", nextDay)
         << '\n';
}

int main() {
    printDates();
    return 0;
}