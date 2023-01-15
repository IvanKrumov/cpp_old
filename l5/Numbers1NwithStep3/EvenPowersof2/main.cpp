#include <iostream>
#include <cmath>

using namespace std;

int main () {
    long int n;
    cin >> n;

    for (int i=0; i <= n; i++) {
        if (i % 2 == 0) {
            cout << pow(2, i) << endl;
        }
    }

    return 0;
}