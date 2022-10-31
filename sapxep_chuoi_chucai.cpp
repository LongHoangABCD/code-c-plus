// Cau 9
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