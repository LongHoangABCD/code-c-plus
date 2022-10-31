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