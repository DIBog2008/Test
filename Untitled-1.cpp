#include <iostream>
#include <clocale>



int main() {
    int a,b;
    char c;
    std::cin >> a >> b >> c;
    switch (c) {
        case '+':
            std::cout << a + b;
            break;
        case '-':
            std::cout << a - b;
            break;
        case '*':
            std::cout << a * b;
            break;
        case '/':
            if (b == 0) {
                std::cout << "На ноль делить нельзя!";
                break;
            }   else {
                std::cout << a / b;
                break;
            }
        default:
            std::cout << "Неверная операция";
    }
}