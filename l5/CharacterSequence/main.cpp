#include <iostream>

using namespace std;

int main() {
    string text;
    int n;

    getline(cin, text);
    n = text.length();

    for (int i = 0; i < n; i++ ) {
        cout << text[i] << endl;
    }

    return 0;
}