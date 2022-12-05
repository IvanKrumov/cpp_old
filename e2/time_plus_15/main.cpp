#include <iostream>

using namespace std;

int main() {
    int hour, minutes, sum;
    cin >> hour >> minutes;

    if (hour < 1) {
        hour = 0;
    } else {
        hour *= 60;
    }

    sum = hour + minutes + 15;

    hour = sum / 60;
    minutes = sum % 60;

    if ((sum / 60) > 24) 

    if (minutes < 10) {
        cout << hour << ":0" << minutes << endl;
    } else {
        cout << hour << ":" << minutes << endl;
    }

    
    return 0;
}