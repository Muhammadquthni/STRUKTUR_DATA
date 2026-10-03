#include <iostream>
using namespace std;

void tukarKali10(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    a *= 10;
    b *= 10;
}

int main() {
    int x, y;
    cin >> x >> y;

    tukarKali10(x, y);

    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}