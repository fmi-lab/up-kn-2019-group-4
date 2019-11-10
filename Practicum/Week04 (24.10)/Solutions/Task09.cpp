#include<iostream>

bool prime(int x) {
	if (x == 1) return false;
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0) return false;
	}

	return true;
}

int main() {
	int x = 81827;
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0 && prime(i)) {
			std::cout << i << " ";
		}
	}

	return 0;
}