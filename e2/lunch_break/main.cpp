#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string serial;
    int time_serial;
    int lunch_break;
    double total_rest;
    
    getline(cin, serial);
    cin  >> time_serial >> lunch_break;

    total_rest = time_serial + lunch_break / 8.0 + lunch_break / 4.0;
    // total_rest = ceil(total_rest);

    if (total_rest <= lunch_break) {
        cout << "You have enough time to watch " << serial << " and left with " << ceil(lunch_break - total_rest) << " minutes free time." << endl;
    } else {
        cout << "You don't have enough time to watch " << serial << ", you need " << ceil(total_rest - lunch_break) << " more minutes." << endl;
    }



    return 0;
}