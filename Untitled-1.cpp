#include <iostream>
#include <clocale>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter
int len(int a) {
    if (a / 1000 > 0) {
        return 0;
    } else {
        if (a / 100 > 0) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    std :: setlocale(LC_ALL, "Russian");
    int a;
    std :: cin >> a;
    if (len(a)==1) {
        std :: cout << "YES";
    } else {
        std :: cout << "NO";
    }
    return 0;
}