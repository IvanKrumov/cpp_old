#include <iostream>
#include <cmath>

using namespace std;

int main() {    
    string figure;
    cin >> figure;

    if (figure == "square") {
        double a;
        cin >> a;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout << a * a;
    } else if (figure == "rectangle") {
        double a, b;
        cin >> a >> b;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout << a * b;
    } else if (figure == "circle") {
        double r;
        cin >> r;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout << r * r * M_PI;
    } else if (figure == "triangle") {
        double a, h;
        cin >> a >> h;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout << (a * h) / 2;
    }

    return 0;
}