#include <iostream>

using namespace std;



int main() {
    int number;
    double bonus_points;
    cin >> number;

    bonus_points = 0;

    /* How to output with some digit after decimal point */
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(1);

    if (number % 2 == 0) {
        bonus_points += 1;
    }

    if (number % 10 == 5) {
        bonus_points += 2;
    }

    if (number <= 100) {
        bonus_points += 5;
    } else if (number <= 1000) {
        bonus_points += (number * 0.2);
    } else if (number > 1000) {
        bonus_points += number * 0.1;
    }

    cout << bonus_points << endl;
    cout << number + bonus_points << endl;
}