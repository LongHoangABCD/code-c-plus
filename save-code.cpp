// Câu 1
#include <iostream>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    cout << a/b;
}
// Câu 2
#include <iostream>
#define PI 3.1459
using namespace std;
int main() {
    float r;
    cin >> r;
    cout << PI * 2 * r;
}
//Câu 3
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(a <= 0){
        cout << "không có k?t qu?";
    }else{
        cout << (10 - b)/a;
    }
}
//Câu 4
#include <iostream>
using namespace std;
int KTSNT(int n) {
    int x = 0;
    if (n >= 2){
        for (int i = 2; i < n; i++){
            if (n % i == 0) {
                x = 1;
                break;
            }
        }
    }
    if (x == 1){
        return 0;
    }
    else if(x==0){
        return 1;
    }
}

int main() {
    int a;
    cin >> a;  
    if(a > 0) {
        for (int i = a + 1;; i++){
            if (KTSNT(i) == 1){
                cout << i << endl;
                break;
            }
        }
    }else{
        cout << "Không tính du?c k?t qu?";
    }
}
// Câu 5
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
// Câu 6
#include <iostream>
#include <string.h>
using namespace std;

int main () {
    char str1[150];
    cin >> str1;
    if (strstr(str1, "hello")){
        cout << "Tìm th?y";
    }else{
        cout << "Không tìm th?y";
    }
} 
// Câu 7
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
// Câu 8
#include <iostream>
using namespace std;
int ucln(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else b -= a;
    }
    return a;
}
int bcnn(int a, int b){
    int maxNum = a*b, bcnn;
    for(int i = max(a, b); i <= maxNum; i++){
        if(i % a == 0 && i % b == 0){
            bcnn = i;
            break;
        }
    }
    return bcnn;
}
int main() {
    int a, b;
    cin >> a >>  b;
    if(a < 0 || b < 0) {
        cout << "Nh?p sai d? bài";
    }else{
        cout << ucln(a, b) << '\n';
        cout << bcnn(a, b);
    }
}
// Câu 9
#include <iostream>
#include <string.h>
using namespace std;
 
int main (void) {
    char string[150], temp;
    cin >> string;

    for (int i = 0; i < strlen(string) - 1; i++) {
      for (int j = i+1; j < strlen(string); j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
    }
    cout << string;
}
// Câu 10
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

