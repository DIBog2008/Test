#include <iostream>
#include <clocale>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter


int main() {
    std :: setlocale(LC_ALL, "Russian");
    short a;
    std :: cin >> a;
    if (a >= 12) {
        std :: cout << "Доступ разрешен";
    } else {
        std :: cout << "Доступ запрещен";
    }

    return 0;
}