#include <iostream>

using namespace std;

int main() {
    string city;
    double sales, bonus;

    bonus = 0.0;

    cin >> city >> sales;

    if (city == "Sofia" || city == "Varna" || city == "Plovdiv" && sales > 0) {
        if (city == "Sofia") {
            if (0 <= sales && sales <= 500) {
                bonus = sales * 0.05;
            } else if (500 < sales && sales <= 1000) {
                bonus = sales * 0.07;
            } else if (1000 < sales && sales <= 10000) {
                bonus = sales * 0.08;
            } else if (sales > 1000) {
                bonus = sales * 0.12;
            }
        } else if (city == "Varna") {
            if (0 <= sales && sales <= 500) {
                bonus = sales * 0.045;
            } else if (500 < sales && sales <= 1000) {
                bonus = sales * 0.075;
            } else if (1000 < sales && sales <= 10000) {
                bonus = sales * 0.1;
            } else if (sales > 1000) {
                bonus = sales * 0.13;
            }
        } else if (city == "Plovdiv") {
            if (0 <= sales && sales <= 500) {
                bonus = sales * 0.055;
            } else if (500 < sales && sales <= 1000) {
                bonus = sales * 0.08;
            } else if (1000 < sales && sales <= 10000) {
                bonus = sales * 0.12;
            } else if (sales > 1000) {
                bonus = sales * 0.145;
            }
        }
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        cout << bonus << endl;
    
    } else {
        cout << "error" ;
    }

    return 0;
}

