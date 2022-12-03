#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double radians;

    cout << "Enter radians: ";
    cin >> radians;

    double deg;

    deg = radians * 180 / 3.14;

    double result = round(deg);

    cout << "Degrees: " << result << endl;
}