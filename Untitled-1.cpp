#include <iostream>
#include <clocale>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter


int main() {
    std :: setlocale(LC_ALL, "Russian");
    std :: string a,b;
    std :: cin >> a >> b;
    if (a == b) {
        std :: cout << "Пароль принят";
    } else {
        std :: cout << "Пароль не принят";
    }

    return 0;
}