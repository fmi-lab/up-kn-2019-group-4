#include<iostream>
const int MAX_SIZE = 100;


void printMatrix(int arr[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}


void multiply(int matrx1[][MAX_SIZE], int matrx2[][MAX_SIZE], int n){
    int result [MAX_SIZE][MAX_SIZE]; 
    // i is used to keep count of the row in the result which equals the row from the first
    // matrix we multiply with the column in the second

    for(int i = 0; i < n; i++) {
        //j specifies the column in the second matrix and the result
        for(int j = 0; j < n; j++) {
            result[i][j] = 0;
            //k is for going through the specified row and column in the given matrices matrx1 and matrx2
            for(int k = 0; k < n; k++) {
                result[i][j] += matrx1[i][k] * matrx2[k][j];
            }
        }
    }
    printMatrix(result, n);
}

int main() {
	int matrixSize;
	int matrx1[MAX_SIZE][MAX_SIZE];
    int matrx2[MAX_SIZE][MAX_SIZE];
	std::cout << "Enter matrix nxn sizes: ";
	std::cin >> matrixSize;
	std::cout << std::endl;
//Fill matrices
	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++)
		{
			std::cin >> matrx1[i][j];
		}
	}
	std::cout << std::endl;
    for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++)
		{
			std::cin >> matrx2[i][j];
		}
	}
    std::cout << std::endl;

    multiply(matrx1, matrx2, matrixSize);

}