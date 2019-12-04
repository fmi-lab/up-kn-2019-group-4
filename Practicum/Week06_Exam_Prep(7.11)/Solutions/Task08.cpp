#include <iostream>

const int MAX_SIZE = 100;


void printMatrix(int matr[][MAX_SIZE], int rowAndColSize) {

	for (int i = 0; i < rowAndColSize; i++) {
		for (int j = 0; j < rowAndColSize; j++) {
			std::cout << matr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int n, arr[MAX_SIZE][MAX_SIZE];
	
	std::cout << "Enter n: ";
	std::cin >> n;

	for (int k = 0; k < n; k++) {
		int i = 0;
		for (int j = k; j < n; j++, i++)
		{
			arr[i][j] = k;
		}

	}

	for (int k = 1; k < n; k++) {
		int j = 0;
		for (int i = k; i < n; j++, i++)
		{
			arr[i][j] = k;
		}
	}

	printMatrix(arr, n);

	return 0;
}