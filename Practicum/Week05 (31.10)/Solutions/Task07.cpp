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
	
	int temp;

	for (size_t i = 0; i < n/2; i++) {
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}

	for (size_t i = 0; i < n; i++) {
		std::cout << arr[i];
	}

}