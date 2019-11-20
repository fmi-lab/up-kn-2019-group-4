#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arr[100];
	int n;
	std::cin >> n;

	for (size_t i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int indexToDelete;
	std::cin >> indexToDelete;

	for (size_t i = indexToDelete; i < n; i++) {
		arr[i] = arr[i + 1];
	}

	arr[n - 1] = -1;

	for (size_t i = 0; i < n; i++) {
		std::cout << arr[i];
	}

}