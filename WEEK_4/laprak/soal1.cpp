#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Jumlah mahasiswa (max 10): ";
    cin >> n;
    if (n > 10) n = 10;
    if (n < 1) n = 1;

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        cin.ignore();
        cout << "Nama   : "; getline(cin, mhs[i].nama);
        cout << "NIM    : "; cin >> mhs[i].nim;
        cout << "UTS    : "; cin >> mhs[i].uts;
        cout << "UAS    : "; cin >> mhs[i].uas;
        cout << "Tugas  : "; cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n=== Data Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << mhs[i].nama << " | " << mhs[i].nim
             << " | UTS: " << mhs[i].uts << " | UAS: " << mhs[i].uas
             << " | Tugas: " << mhs[i].tugas
             << " | Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}