#include<iostream>

int main() {
	unsigned n, currNum;
	std::cin >> n;

	int min = n % 10;
	int max = n % 10;
	n /= 10;

	while (n != 0) {
		currNum = n % 10;
		if (min > currNum) min = currNum;
		else if (max < currNum) max = currNum;
		n /= 10;
	}
	std::cout << "The minimum number is: " << min << " And the max is: " << max;

	return 0;
}