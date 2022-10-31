// Cho mang bat ky, sap xep mang tang dan
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n > 0){
        int a[n];
        for(int k = 0; k< n; k++){
            cin >> a[k];
        }
        int tg = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    tg = a[i];
                    a[i] = a[j];
                    a[j] = tg;
                }
            }
        }
        for(int k = 0; k< n; k++){
           cout << a[k];
        }
    }else{
        cout << "S? lu?ng ph?n t? không du?c âm" ;
    }
}