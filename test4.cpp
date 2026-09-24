#include <iostream>
#include <clocale>
int Factor(int a){
    if (a == 0) {
        return 1;
    }
    return Factor(a - 1) * a;
}
int Fibo(int a){
    if (a == 0){
        return 0;
    } else if(a == 1){
        return 1;
    } else {
        return Fibo(a - 1) + Fibo(a - 2);
    }
}
int main(){
    std:: cout << Fibo(6) << ' ' << Factor(6);
}