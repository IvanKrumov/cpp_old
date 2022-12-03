#include <iostream>

using namespace std;



int main() {
    int pages, pages_per_hour, days;
    cin >> pages >> pages_per_hour >> days;
    cout << pages / (pages_per_hour * days) << endl;
    

    

    return 0;
}