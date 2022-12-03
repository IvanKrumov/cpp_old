#include <iostream>

using namespace std;

int main() {


    double usd;
    double lev;

    cout << "Enter USD: ";
    cin >> usd;

    lev = usd * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Lev: " << lev << endl;
    
    return 0;
}