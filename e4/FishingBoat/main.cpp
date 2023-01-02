#include <iostream>

using namespace std;

int main() {
    int budget, fishers, rent;
    string season;
    double discount, spent;

    discount = 1.0;
    spent = 0.0;

    cin >> budget >> season >> fishers;



    if (fishers <= 6) {
        discount = 0.9;
    } else if (fishers >= 7 && fishers <= 11) {
        discount = 0.85;
    } else if ( fishers >= 12) {
        discount = 0.75;
    }

    if (season != "Autumn") {
        if (fishers % 2 == 0) {
        discount -= 0.05;
        }
    }

    if (season == "Spring") {
        rent = 3000;
    } else if (season == "Summer" || season == "Autumn") {
        rent = 4200;
    }  else if (season == "Winter") {
        rent = 2600;
    }

    spent = rent * discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= spent) {
        cout << "Yes! You have " << budget - spent << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << spent - budget << " leva." << endl;
    }

    return 0;
}