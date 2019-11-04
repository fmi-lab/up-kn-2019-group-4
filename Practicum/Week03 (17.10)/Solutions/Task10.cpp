#include <iostream>
#include <cmath>
using namespace std;

void factorialN(int n) {
	long long prod = 1;
	for (int i = 1; i <= n; i++) {
		prod *= i;
	}
	cout << prod;
}


int main() {
	int n;
	cin >> n;
	factorialN(n);
}