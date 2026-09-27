#include <iostream>
#include <string>

using namespace std;

int main(){
    string awal[20] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas","enam belas","tujuh belas","delapan belas","sembilan belas"};
    string akhir[10] = {"","","dua puluh","tiga puluh","empat puluh","lima puluh","enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};
    int x ;
    cin >> x;
    if(x<20 && x>=0){
        cout << awal[x];
    }
    else if (x>=20 && x<100){
        int puluhan = x / 10;
        int satuan = x % 10;
        if(satuan==0){
            cout << akhir[puluhan];
        }
        else{
            cout << akhir[puluhan]+" "+awal[satuan];
        }
    }
    else if (x==100){
        cout << "seratus";
    }
    else{
        cout << "error";
    }
}