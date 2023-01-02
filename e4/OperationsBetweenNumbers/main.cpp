#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n1, n2;
    int result;
    string action, even_odd;

    cin >> n1 >> n2 >> action;


    if (action == "/" || action == "%") {
        if (n2 == 0) {
            cout << "Cannot divide " << n1 << " by zero" << endl;
        } else if (action == "/" && n2 !=0 ) {
            double n1, n2;
            result = n1 / n2;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << n1 << " " << action << " " << n2 << " = " << result << endl;
        } else if (action == "%" && n2 !=0 ) {
            result = n1 % n2;
            cout << n1 << " " << action << " " << n2 << " = " << result << endl;
        }
        
    } else {                            // here will be + - and *
        if (action == "+") {
            result = n1 + n2;
        } else if (action == "*") {
            result = n1 * n2;
        } else if (action == "-") {
            result = n1 - n2;
        }
        if (result % 2 == 0) {
            even_odd = "even";
        } else {
            even_odd = "odd";
        }   

        cout << n1 << " " << action << " " << n2 << " = " << result << " - " << even_odd << endl;
    }




    return 0;
}