#include<iostream>

int main() {
	int n, counter = 0;
	std::cin >> n;
	
	if (n == 0) {
		std::cout << n;
		counter++;
	}

	while (n != 0) {
		counter++;
		std::cout << n % 10;
		n /= 10;
	}
	std::cout << " length: " << counter;
	
	return 0;
}