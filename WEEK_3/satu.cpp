#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nilai[n];
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rata = total / n;
    int diAtas = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata) diAtas++;
    }

    cout << "Rata-rata: " << rata << endl;
    cout << "Di atas rata-rata: " << diAtas << endl;
    return 0;
}