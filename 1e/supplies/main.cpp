#include <iostream>

using namespace std;

int main() {
    int pens, markers, cleaning_solution, discount;

    cin >> pens >> markers >> cleaning_solution >> discount;

    cout << pens * 5.80 + markers * 7.20 + cleaning_solution * 1.20 - (pens * 5.80 + markers * 7.20 + cleaning_solution * 1.20) * (discount / 100.0) << endl;


    return 0;
}