#include <iostream>

using namespace std;

int main() {
    int count_toys;
    int puzzle;
    int doll;
    int bear;
    int minion;
    int truck;

    double trip_price, sum;

    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);

    cin >> trip_price >> puzzle >> doll >> bear >> minion >> truck;

    count_toys = puzzle + doll + bear + minion + truck;
    sum = puzzle * 2.60 + doll * 3 + bear * 4.10 + minion * 8.20 + truck * 2;
 
    if (count_toys >= 50) {
        sum -= sum * 0.25;
    }

    sum -= sum * 0.10;
    
    if (sum >= trip_price) {
        cout << "Yes! " << sum - trip_price << " lv left." << endl;
    } else {
        cout << "Not enough money! " << trip_price - sum << " lv needed." << endl;
    }

    return 0;
}