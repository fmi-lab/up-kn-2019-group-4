#include <iostream>
#include <cmath>
using namespace std;

void squaresOfTwoToN(int n) {
	int i = 0;

	while (pow(2, i) <= n) {
		cout << pow(2, i) << " ";
		i++;
	}
}


int main() {
	int n;
	cin >> n;
	squaresOfTwoToN(n);
}