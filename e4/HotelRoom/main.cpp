#include <iostream>

using namespace std;


int main() {
    string month;
    int nights;
    double priceAp, priceSt;


    cin >> month >> nights;

    if (month == "May" || month == "October") {
        priceAp = nights * 65.00;
        priceSt = nights * 50.00;
        if (nights > 7 && nights <= 14) {
            priceSt = nights * 50.00 * 0.95;
        } else if (nights > 14) {
            priceSt = nights * 50.00 * 0.70;
        }
    } else if (month == "June" || month == "September") {
        priceAp = nights * 68.70;
        priceSt = nights * 75.20;
        if (nights > 14) {
            priceSt = nights * 75.20 * 0.80;
        }
    } else if (month == "July" || month == "August"){
        priceAp = nights * 77.00;
        priceSt = nights * 76.00;
    }


    if (nights > 14) {
        priceAp = priceAp * 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Apartment: " << priceAp << " lv." << endl;
    cout << "Studio: " << priceSt << " lv." << endl;

    return 0;
}