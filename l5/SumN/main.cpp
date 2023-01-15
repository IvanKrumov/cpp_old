#include <iostream>


using namespace std;

int main() {
    int nCount, sum;
    cin >> nCount;

    sum = 0;

    for (int i=1; i <= nCount; i++) {
        int n;
        cin >> n;

        sum += n;
    }

    cout << sum << endl;

    return 0;
}


