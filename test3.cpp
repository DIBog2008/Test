#include <iostream>
int main() {
    const char* messages[] = {
    "Error: Low battery",
    "Warning: High temperature",
    "Success: Connected to Wi-Fi",
    "Info: Update available",
    "Error: Connection timeout"
    };
    const int size = 5;
    int count = 0;
    const char** ptr = messages;
    while (count != size){
        std:: cout << "Adress: " << ptr << " -> : text " << *ptr << '\n';
        const char* gost = *ptr;
        *ptr = *(ptr + (size - count));
        *(ptr + (size - count) * 2) = gost;        
        ptr++; 
        count++;
    }
    count = 0;
    ptr = messages;
    while (count != size){
        std:: cout << "Adress: " << ptr << " -> : text " << *ptr << '\n';
        const char* gost = *ptr;       
        ptr++; 
        count++;
    }

}