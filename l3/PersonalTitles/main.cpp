#include <iostream>

using namespace std;

int main() {
    double age;
    string sex;

    cin >> age >> sex;

    if (sex == "m") {
        if (age >= 16) {
            cout << "Mr." << endl;
        } else if ( age < 16) {
            cout << "Master";
        }
    } else if (sex == "f") {
        if (age >= 16) {
            cout << "Ms." << endl;
        } else if ( age < 16) {
            cout << "Miss";
        }
    }

    return 0;
}