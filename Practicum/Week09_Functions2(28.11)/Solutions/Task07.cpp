#include <iostream>

const int MAX_SIZE = 100;

void input(int* a, int size) {
    for(int i = 0; i < size; i++) {
        std::cin >> a[i];
    }
}

int mySum(int* a, int size) {
    if(size == 0) { return a[0]; }
    return a[size] + mySum(a, size - 1);
}

int main() {
    int a[MAX_SIZE], n;
    std::cin >> n;
    input(a, n);
    std::cout << mySum(a, n);
}  