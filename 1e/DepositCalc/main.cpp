#include <iostream>

using namespace std;

int main() {


    double deposit, interest_rate, total;
    int months;

    // cout << "Input your Deposit: ";
    cin >> deposit;

    // cout << "Input your period in months: ";
    cin >> months;

    // cout << "Input your Interest Rate: ";
    cin >> interest_rate;

    
    total = deposit + months*(deposit*((interest_rate/100)/12));

    cout << total << endl;



    return 0;
}