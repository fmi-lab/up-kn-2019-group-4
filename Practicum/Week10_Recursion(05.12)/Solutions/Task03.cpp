#include <iostream>
const int MAX_SIZE = 100;

int myMax(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int maxArray(int * a, int n) {
    if(n == 0) {
        return a[0];
    }
    
    return myMax(maxArray(a, n - 2), a[n - 1]);
}

int main() {
    int a[MAX_SIZE];
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::cout << maxArray(a, n);
}