#include<iostream>
#include<cmath>

const int MAX_INT = 100;

int main() {
	unsigned n;
	int x, sum = 0;

	std::cout << "Please enter an odd number n and then x: ";
	std::cin >> n >> x;

	if (n % 2 == 0) {
		std::cout << "Please enter an odd n";
		return 0;
	}

	for (int i = 1, counter = 0; i <= n; i += 2, counter++) {
		if (counter % 2 == 0) {
			sum += pow(x, i);
		} else {
			sum -= pow(x, i);
		}
	}

	std::cout << "The sum is: " << sum;

	return 0;
}