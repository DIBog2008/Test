#include <iostream>

int main () {
    int a;
    std :: cin >> a;
    int t[a];
    for (int i =0; i < a; i++) {
        std :: cin >> t[i];
    }
    for (int i = 1; i < a; i++) {
        int m = t[i];
        for (int j = (i-1); j >=0 ; j--) {
            if (m < t[j]) {
               t[j+1]=t[j];
               if (j == 0) {
                   t[j]=m;
               }
            } else {
                t[j+1] = m;
                break;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        std :: cout << t[i] << " ";
    }
}
