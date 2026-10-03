#include <iostream>
using namespace std;

int hitungKarakter(const string &kata, char c) {
    int count = 0;
    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == c) count++;
    }
    return count;
}

int main() {
    string kata;
    char c;
    cin >> kata;
    cin >> c;

    cout << hitungKarakter(kata, c) << endl;
    return 0;
}