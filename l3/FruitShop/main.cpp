#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string fruit, day;
    double quantity, price;

    cin >> fruit >> day >> quantity;
    
    price = 0.0;



    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if (fruit == "banana") {
             price = quantity * 2.50;
            cout << price;
        } else if (fruit == "apple") {
             price = quantity * 1.20;
            cout << price;
        } else if (fruit == "orange") {
             price = quantity * 0.85;
            cout << price;
        } else if (fruit == "grapefruit") {
             price = quantity * 1.45;
            cout << price;
        } else if (fruit == "kiwi") {
             price = quantity * 2.70;
            cout << price;
        } else if (fruit == "pineapple") {
             price = quantity * 5.50;
            cout << price;
        } else if (fruit == "grapes") {
             price = quantity * 3.85;
            cout << price;
        } else {
            cout << "error" << endl;
        }
    } else  if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") {
            price = quantity * 2.70;
            cout << price;
        } else if (fruit == "apple") {
            price = quantity * 1.25;
            cout << price;
        } else if (fruit == "orange") {
            price = quantity * 0.90;
            cout << price;
        } else if (fruit == "grapefruit") {
            price = quantity * 1.60;
            cout << price;
        } else if (fruit == "kiwi") {
            price = quantity * 3.00;
            cout << price;
        } else if (fruit == "pineapple") {
            price = quantity * 5.60;
            cout << price;
        } else if (fruit == "grapes") {
            price = quantity * 4.20;
            cout << price;
        } else {
            cout << "error" << endl;
        }
    } 

    return 0;
}