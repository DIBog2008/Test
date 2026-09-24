#include <iostream>
#include <cstring>
int Factor(int a);
int Fibo(int a);
int main(int argc, char* argv[]) {
    if (argc == 1 || argc > 3) {
        std::cout << "Please -f or -d";
    } else {
        if (!strcmp(argv[1], "-f")){
            int num = std::atoi(argv[2]);
            std::cout << Factor(num) << '\n';
        } else if (!strcmp(argv[1], "-b")){
            int num = std::atoi(argv[2]);
            std::cout << Fibo(num) << '\n';
        }
    }
}
int Factor(int a){
    int b = 1, c = 1;
    while(b <= a){
        c = c * b;
        b++;
    }
    return c;
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