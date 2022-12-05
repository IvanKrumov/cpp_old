#include <iostream>

using namespace std;

int main() {
    int timeFirst, timeSecond, timeThird, sum, minutes, seconds;
    cin >> timeFirst >> timeSecond >> timeThird;

    sum = timeFirst + timeSecond + timeThird;
    minutes = sum / 60;
    seconds = sum - minutes * 60;

    if (seconds < 10) {
        cout << minutes << ":" << "0" <<seconds << endl;
    } else {
        cout << minutes << ":" << seconds << endl;
    }


    
    return 0;
}