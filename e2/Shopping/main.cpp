#include <iostream>

using namespace std;

int main() {
    double budget, price_cards, price_processors, price_rams, discount, total_price;
    int cards, processors, ram_dimms;

    discount = 0;

    cin >> budget >> cards >> processors >> ram_dimms;

    price_cards = cards * 250;
    price_processors = (price_cards * 0.35) * processors;
    price_rams = price_cards * 0.10;

    if (cards > processors) {
        discount = 0.15;
    }

    total_price = (price_cards + price_processors + price_rams) - (price_cards + price_processors + price_rams) * discount;

    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);

    if (budget >= total_price) {
        cout << "You have " << budget - total_price << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << total_price - budget << " leva more!" << endl;
    }

    return 0;
}