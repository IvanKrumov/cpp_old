#include <iostream>

using namespace std;

int main() {
    int degrees;
    string time_of_day, outfit, shoes;

    cin >> degrees >> time_of_day;

    if ( 10 <= degrees && degrees <= 18) {
        if (time_of_day == "Morning") {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (time_of_day == "Afternoon") {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (time_of_day == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    } else if ( 18 < degrees && degrees <= 24) {
        if (time_of_day == "Morning") {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (time_of_day == "Afternoon") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (time_of_day == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    } else if ( degrees >= 25) {
        if (time_of_day == "Morning") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (time_of_day == "Afternoon") {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        } else if (time_of_day == "Evening") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    // cout.setf(ios::fixed,ios::floatfield);
    // cout.precision(2); 
    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;


    return 0;
}