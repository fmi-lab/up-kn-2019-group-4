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

	int min = 5001, minIndex;

	for (size_t i = 0; i < n; i++) {
		minIndex = i;
		min = arr[i];
		for (size_t j = i; j < n; j++) {
			if (min > arr[j]) {
				minIndex = j;
				min = arr[j];
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	for (size_t i = 0; i < n; i++) {
		std::cout << arr[i];
	}

}