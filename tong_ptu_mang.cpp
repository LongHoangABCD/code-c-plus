// Cho mang bat ky, tinh tong so luong phan tu trong mang
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n > 0){
        int a[n];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        int tong = 0;
        for(int i = 0; i< n; i++){
            tong += a[i];
        }
        cout << tong;
    }else{
        cout << "S? lu?ng ph?n t? không du?c âm" ;
    }
}