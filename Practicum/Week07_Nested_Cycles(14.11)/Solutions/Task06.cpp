#include<iostream>
const int MAX_SIZE = 100;

void printDiag(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

bool checkUnique(int arr[], int size) {
	printDiag(arr, size);
	//size - 1 because we want to compare arr[size - 2] and arr[size-1] last 
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j]) {
				return false;
			}
		}
	}

	return true;
}

bool checkDiagonal(int arr[][MAX_SIZE], int matrixSize) {
	int diag1[MAX_SIZE], diag2[MAX_SIZE], sizeCounter = 0;

	// above main diagonals
	
	//The idea is that I will put all the elements from the diagonal in an array and check if they are unique
	//if they are I return true. Matrix size - 1 because i want to remove the corner numbers.
	for (int k = 0; k < matrixSize - 1; k++) {
		int i = 0;
		sizeCounter = 0;

		for (int j = k; j < matrixSize; j++, i++)
		{
			diag1[sizeCounter] = arr[i][j];
			diag2[sizeCounter] = arr[i][matrixSize - j - 1];
			sizeCounter++;
		}

		if (checkUnique(diag1, sizeCounter) || checkUnique(diag2, sizeCounter)) {
			std::cout << "TRUE";
			return true;
		}
	}

	//under main diagonals
	for (int k = 1; k < matrixSize - 1; k++) {
		int j = 0;
		sizeCounter = 0;
		for (int i = k; i < matrixSize; j++, i++)
		{
			diag1[sizeCounter] = arr[i][j];
			diag2[sizeCounter] = arr[matrixSize - i - 1][j];
			sizeCounter++;
		}

		if (checkUnique(diag1, sizeCounter) || checkUnique(diag2, sizeCounter)) {
			std::cout << "TRUE";
			return true;
		}
	}
	std::cout << "FALSE";
	return false;
}


int main() {
	int matrixSize;
	int arr[MAX_SIZE][MAX_SIZE];
	std::cout << "Enter matrix nxn sizes: ";
	std::cin >> matrixSize;
	std::cout << std::endl;

	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	std::cout << std::endl;

	checkDiagonal(arr, matrixSize);
}