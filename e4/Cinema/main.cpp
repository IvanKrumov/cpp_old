#include <iostream>

using namespace std;

int main() {
    string projekcia;
    int rows, colomns;
    double tickets_price;

    tickets_price = 0.0;

    cin >> projekcia >> rows >> colomns;

    if (projekcia == "Premiere") {
        tickets_price = rows * colomns * 12.00;
    } else if (projekcia == "Normal") {
        tickets_price = rows * colomns * 7.50;
    } else if (projekcia == "Discount") {
        tickets_price = rows * colomns * 5.00;
    }

    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);        
    cout << tickets_price << " leva" << endl;

    return 0;
}