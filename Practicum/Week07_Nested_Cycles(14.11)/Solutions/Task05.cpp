#include<iostream>

const int MAX_SIZE = 100;

void transpose(int arr[][MAX_SIZE], int rowSize, int colSize) {
    for (int j = 0; j < colSize; j++)
    {
        for(int i = 0; i < rowSize; i ++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}


int main(){
    int rowSize, colSize;
    int arr[MAX_SIZE][MAX_SIZE];
    std::cout << "Enter matrix nxm sizes: ";
    std::cin >> rowSize >> colSize;
    std::cout << std::endl;
    
    for(int i = 0; i < rowSize; i ++) {
        for (int j = 0; j < colSize; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    
    transpose(arr, rowSize, colSize);

    return 0;
}