#include <iostream>
#include <cmath>

using namespace std;


int main() {
    string flowers;
    int count, budget;
    double discount, spent, price_per_plower, total;

    discount = 1.0;
    count = 0;
    price_per_plower = 0.0;

    cin >> flowers >> count >> budget;

    if (flowers == "Roses") {
        price_per_plower = 5.00;
        if (count > 80) {
            discount = 0.90;
        }
    } else if (flowers == "Dahlias") {
        price_per_plower = 3.80;
        if (count > 90) {
            discount = 0.85;
        }
    } else if (flowers == "Tulips") {
        price_per_plower = 2.80;
        if (count > 80) {
            discount = 0.85;
        }
    } else if (flowers == "Narcissus") {
        price_per_plower = 3.00;
        if (count < 120) {
            discount = 1.15;
        }
    } else if (flowers == "Gladiolus") {
        price_per_plower = 2.50;
        if (count < 80) {
            discount = 1.20;
        }
    }
    spent = count * price_per_plower * discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= spent) {
        cout << "Hey, you have a great garden with " << count << " " << flowers << " and " << budget - spent << " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << spent - budget << " leva more." << endl;
    }
 

    return 0;
}