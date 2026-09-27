#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    cout << "input: ";
    cin >> x;

    for(int n = 1; n <= x+1; n++){
        int y = (x + 1) - n;
        for(int i = y; i >= 1; i--){
            cout << i;
        }
        cout << "*";
        for(int j = 1; j <= y; j++){
            cout << j;
        }
        cout << endl;
}
}
