#include <iostream>
bool strcmp(char* str1, char* str2);
bool strcmp(char* str1, const char* str2);
int main (int argc, char** argv) {
    if (argc == 1 ){
        std :: cout << "Hello World\n";
        return 0;
    } else if (argc > 2){
        std :: cout << "Pls zero or one arguments\n";
        return 0;
    } else {
        char banword[] = "John";
        char* username = *(argv + 1);
        if (!strcmp(username, banword)){
            std :: cout << "Hello " << username << "!\n";
        } else {
            std :: cout << "GTFO John\n";
            return 0;
        }
    }
    return 0;
}

bool strcmp(char* str1, char* str2){
    while (*str1 != '\0'){
        if (*str1 != *str2){
            return false;
        } else {
            str1++;
            str2++;
        }
    }
    return *str1 == *str2;
}

