#include <iostream>

using namespace std;

int main(){
     float a,b;
    cout << "Input bilangan pertama: ";
    cin >> a;
    cout << "Input bilangan kedua: ";
    cin >> b;
    float jumlah = a + b;
    float kurang = a - b;
    float kali = a * b;
    float bagi = a / b;
    cout << "Hasil penjumlahan: " << jumlah << endl;
    cout << "Hasil pengurangan: " << kurang << endl;
    cout << "Hasil perkalian: " << kali << endl;
    cout << "Hasil pembagian: " << bagi;
    return 0;
}