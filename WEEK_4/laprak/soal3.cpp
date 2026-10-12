#include <iostream>
using namespace std;


void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


void tukarArray(int a[3][3], int b[3][3], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}


void tukarPointer(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    int baris = 1, kolom = 2;
    tukarArray(A, B, baris, kolom);
    cout << "\nSetelah tukar posisi [" << baris << "][" << kolom << "]" << endl;
    cout << "Array A:" << endl; tampilArray(A);
    cout << "\nArray B:" << endl; tampilArray(B);

    cout << "\nSebelum tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah tukar pointer: x = " << *p1 << ", y = " << *p2 << endl;

    return 0;
}