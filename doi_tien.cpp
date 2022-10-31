#include <iostream>
using namespace std;
int main() {
    int so_tien;
    cin >> so_tien;
    int st_500, st_200, st_100, st_50, st_20, st_10, st_5, st_2, st_1;
    int phan_du;
    if(so_tien > 0){
        st_500 = so_tien / 500000; 
        phan_du = so_tien % 500000;
        st_200 = phan_du / 200000;
        phan_du = phan_du % 200000;
        st_100 = phan_du / 100000;
        phan_du = phan_du % 100000;
        st_50 = phan_du / 50000;
        phan_du = phan_du % 50000;
        st_20 = phan_du / 20000;
        phan_du = phan_du % 20000;
        st_10 = phan_du / 10000;
        phan_du = phan_du % 10000;
        st_5 = phan_du / 5000;
        phan_du = phan_du % 5000;
        st_2 = phan_du / 2000;
        phan_du = phan_du % 2000;
        st_1 = phan_du / 1000;
        cout << "500: " << st_500;
        cout << "\n200: " << st_200;
        cout << "\n100: " << st_100;
        cout << "\n50: " << st_50;
        cout << "\n20: " << st_20;
        cout << "\n10: " << st_10;
        cout << "\n5: " << st_5;
        cout << "\n2: " << st_2;
        cout << "\n1: " << st_1;
    }else{
        cout<< "S? ti?n không du?c âm";
    }
}