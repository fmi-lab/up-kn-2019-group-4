#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

int polinomial(int * a, int n, int x) {
    
    if(n == 1) {
        return a[0]; 
    }

    return a[n - 1] * pow(x, n - 1) + polinomial(a, n - 1, x); //n is the size of the array and a[n-1] is the last element based on that (we count from zero)
}

void reverse(int * a, int n) {
    int swap;
    for (int i = 0; i < n/2; i++) {
        swap = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = swap;
    }
}

int main() {
  int a[MAX_SIZE];
  int n, x;

  std::cin >> n;

  for(int i = 0; i < n; i++) {
      std::cin >> a [i];
  }
  std::cout << "Enter x" << std::endl;
  std::cin >> x;

  reverse(a, n); //reverse the array to make the recursion easier
  std::cout << polinomial(a, n, x);
}


