#include <iostream>

using namespace std;

int main () {
    int hour;
    string day;

    cin >> hour >> day;

    if ( day != "Sunday" && hour >= 10 && hour <= 18 ) {
        cout << "open";
    } else {
        cout <<"closed";
    }

    return 0;
}