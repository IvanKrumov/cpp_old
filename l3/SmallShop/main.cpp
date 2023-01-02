#include <iostream>

using namespace std;

int main () {
    string product;
    string city;
    double quantity;

    cin >> product >> city >> quantity;

    if (city == "Sofia") {
        if (product == "coffee") {
            cout << quantity * 0.50;
        } else if (product == "water") {
            cout <<  quantity * 0.80;
        } else if (product == "beer") {
            cout << quantity * 1.20;
        } else if (product == "sweets") {
            cout << quantity * 1.45;
        } else if (product == "peanuts") {
            cout << quantity * 1.60;
        }
    } else if (city == "Plovdiv") {
        if (product == "coffee") {
            cout << quantity * 0.40;
        } else if (product == "water") {
            cout <<  quantity * 0.70;
        } else if (product == "beer") {
            cout << quantity * 1.15;
        } else if (product == "sweets") {
            cout << quantity * 1.30;
        } else if (product == "peanuts") {
            cout << quantity * 1.50;
        }
    } else if (city == "Varna") {
        if (product == "coffee") {
            cout << quantity * 0.45;
        } else if (product == "water") {
            cout <<  quantity * 0.70;
        } else if (product == "beer") {
            cout << quantity * 1.10;
        } else if (product == "sweets") {
            cout << quantity * 1.35;
        } else if (product == "peanuts") {
            cout << quantity * 1.55;
        }
    }
}