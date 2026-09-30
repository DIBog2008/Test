#include <iostream>
#include <fstream>
int Lenstr(char* a){
    int count = 0;
    for (int i = 0; a[i] != '\0'; ++i){
        count++;
    }
    return count;
}
int main() {
    std::ifstream file("test.txt");
    char ch;
    int count_prob = 0, count_let = 0;
    while (file.get(ch)){
        count_let++;
    }
    char lines[count_let + 1];
    char* ptr = lines;
    file.clear(); 
    file.seekg(0, std::ios::beg); 
    int gost_char = 0;
    while (file.get(ch)){
        if (ch != '\n' && ch != '\t' && ch != '\r' && ch != '\v'){
            if (ch == ' ' || ch == '\0'){
                gost_char++;
            } else {
                gost_char = 0;
            }
            if (gost_char <= 1){
                *ptr = ch;
                ptr++;
            }
        }
    }
    *ptr = '\0';
    ptr = lines;
    int len = Lenstr(lines);
    for (int i =0; i < len; ++i){
        if (lines[i] == ' '){
            count_prob++;
        }
    }
    std::cout << lines << ' ' << "Elements: " << count_prob + 1 << '\n';

}
