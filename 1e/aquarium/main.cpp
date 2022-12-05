#include <iostream>

using namespace std;

int main() {
    int length, width, height;
    double percent;

    cin >> length >> width >> height >> percent;

    cout << (length * width * height) * (1 - (percent / 100.0)) * 0.001 << endl;

    return 0;
}