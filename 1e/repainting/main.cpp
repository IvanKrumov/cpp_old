#include <iostream>

using namespace std;

int main() {
    int naylon, paint, thinner, hours;
    cin>>naylon>>paint>>thinner>>hours;
    cout << ((naylon + 2) * 1.50 + (paint * 1.1) * 14.50 + thinner * 5.00 + 0.40) + 
    ((naylon + 2) * 1.50 + (paint * 1.1) * 14.50 + thinner * 5.00 + 0.40) * 0.3 * hours<< endl;

    return 0;
}