#include <iostream>

using namespace std;

int main() {
    int tax;

    cin >> tax;
    cout << (tax * 0.6) + (tax * 0.6 * 0.8) + 
        (tax * 0.6 * 0.8 * 0.25) + (tax * 0.6 * 0.8 * 0.25 * 0.20) + tax << endl;

    return 0;
}