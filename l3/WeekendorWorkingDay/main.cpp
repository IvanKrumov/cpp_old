#include <iostream>

using namespace std;

int main() {
    string day;

    cin >> day;

    if (day == "Monday") {
        cout << "Working day" << endl;
    } else if (day == "Tuesday") {
        cout << "Working day" << endl;
    } else if (day == "Wednesday") {
        cout << "Working day" << endl;
    } else if (day == "Thursday") {
        cout << "Working day" << endl;
    } else if (day == "Friday") {
        cout << "Working day" << endl;
    } else if (day == "Saturday") {
        cout << "Weekend" << endl;
    } else if (day == "Sunday") {
        cout << "Weekend" << endl;
    } else {
        cout << "Error" << endl;
    }
}