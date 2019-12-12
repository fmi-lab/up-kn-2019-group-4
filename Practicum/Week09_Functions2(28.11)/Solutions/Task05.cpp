#include<iostream>
#include<string.h>

const int MAX_SIZE = 100;

char* encode(char * a) {
    int size = strlen(a);
    for(int i = 0; i < size; i++) {
        if(a[i] <= 'z' && a[i] >= 'a'){
            a[i] =  char('a' + ('z' - a[i]));
        } else {
            a[i] = char('A' + ('Z' - a[i]));
        }
    }

    return a;
}

void print(char * a) {
    int size = strlen(a);
    for(int i = 0; i < size; i++) {
        std::cout << a[i];
    }
}


int main() {
    char a[MAX_SIZE];
    std::cin.getline(a, MAX_SIZE);
    print(encode(a));
}