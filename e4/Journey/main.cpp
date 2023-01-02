#include <iostream>

using namespace std;

int main() {
    double budget, percent;
    string season, destination, accomodation;

    destination = "";

    cin >> budget >> season;

    if (budget <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            accomodation = "Camp";
            percent = 0.30;
        } else if (season == "winter") {
            accomodation = "Hotel";
            percent = 0.70;
        }
    }   else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            accomodation = "Camp";
            percent = 0.40;
        } else if (season == "winter") {
            accomodation = "Hotel";
            percent = 0.80;
        }

    }   else {
        destination = "Europe";
        percent = 0.90;
        accomodation = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    budget = budget * percent;

    cout << "Somewhere in " << destination << endl;
    cout << accomodation << " - " << budget << endl;
    

    return 0;
}