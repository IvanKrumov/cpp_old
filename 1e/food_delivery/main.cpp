#include <iostream>

using namespace std;

int main() {
    int chicken, fish, vegetarian;
    cin >> chicken >> fish >> vegetarian;
    cout << (chicken * 10.35 + fish * 12.40 + vegetarian * 8.15) +
        (chicken * 10.35 + fish * 12.40 + vegetarian * 8.15) * 0.2 + 2.50 << endl;

    return 0;
}