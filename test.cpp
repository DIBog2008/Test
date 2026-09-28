#include <iostream>

int main () {
    int arr_len, count = 0;
    std :: cin >> arr_len;
    int arr[arr_len];
    for (int i = 0; i < arr_len; i++) {
        std :: cin >> arr[i];
    }
    for (int i = 1; i < arr_len; i++) {
        int unsort_el = arr[i];
        for (int j = (i-1); j >= 0 ; j--) {
            if (unsort_el < arr[j]) {
               count++; 
               arr[j+1] = arr[j];
               if (j == 0) {
                   arr[j] = unsort_el;
               }
            } else {
                count++;
                arr[j+1] = unsort_el;
                break;
            }
        }
    }
    for (int i = 0; i < arr_len; i++) {
        std :: cout << arr[i] << " ";
    }
    std :: cout << "Count compare: " << count << '\n'; 
}