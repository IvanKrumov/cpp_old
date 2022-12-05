#include <iostream>

using namespace std;

int main() {
    float budget;
    int statists;
    float price_clothes, budget_clothes, decor;

    budget_clothes = 0;
    decor = 0;

    cin >> budget >> statists >> price_clothes;

    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);

    decor = budget * 0.10;

    if (statists > 150) {
        budget_clothes = (statists * price_clothes) - (statists * price_clothes * 0.10);
    } else {
        budget_clothes = statists * price_clothes;
    }

    if (budget < (decor + budget_clothes)) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << (decor + budget_clothes) - budget << " leva more." << endl;
    } else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - (decor + budget_clothes) << " leva left." << endl;
    }

    return 0;
}