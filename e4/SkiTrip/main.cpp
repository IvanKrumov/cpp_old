#include <iostream>
#include <string>

using namespace std;


int main() {
    string room_type, feedback;
    int days,nights;
    double total_price, price, discount;
    
    cin >> days;

    cin.ignore();               // clean the buffer before using getline if the opeation is not first and there are other 
    getline(cin,room_type);     // inputs before that

    cin >> feedback;

    
    nights = days -1;
    discount = 0.00;

    if (room_type == "room for one person") {
        price = 18.00;
    } else if(room_type == "apartment") {
        price = 25.00;
        if (days < 10) {
            discount = 0.30;
        } else if (days >= 10 && days <=15) {
            discount = 0.35;
        } else if (days > 15) {
            discount = 0.50;
        }
    } else if (room_type == "president apartment") {
        price = 35.00;
        if (days < 10) {
            discount = 0.10;
        } else if (days >= 10 && days <=15) {
            discount = 0.15;
        } else if (days > 15) {
            discount = 0.20;
        }
    }


    total_price = nights * (price - price * discount);

    if (feedback == "positive") {
        total_price *= 1.25; 
    } else {
        total_price *= 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << total_price << endl;

    return 0;
}