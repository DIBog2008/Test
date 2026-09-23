#include <iostream>
int main() {
    int a;
    std::cin >> a;
    char word[a];
    char new_word[a];
    std::cin >> word;
    char* ptr = word;
    char* ptr_n = new_word;
    while (*ptr != '\0'){
        if (*ptr != 'h' && *ptr != 'l'){
            *ptr_n = *ptr;
            ptr_n++;
        }
        ptr++;
    }
    *ptr_n = '\0';
    ptr_n = new_word;
    std::cout << new_word << '\n';
}