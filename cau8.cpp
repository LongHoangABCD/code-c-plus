// Cau 8
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