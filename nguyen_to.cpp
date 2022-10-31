// tim so nguyen to lon hon gan nhat
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
