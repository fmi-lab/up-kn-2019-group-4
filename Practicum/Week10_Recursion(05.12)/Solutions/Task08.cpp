#include <iostream>

const int MAX_SIZE = 100;

void printMatrix(char matr[][MAX_SIZE], int cols, int rows) {
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matr[i][j] << " ";
        }
        std::cout << std::endl;

    }
}

void paint(char matr[][MAX_SIZE], int rows, int cols, int currRow, int currCol, char oldSym, char newSym) {
    if(currRow >= rows || currCol >= cols || currRow < 0 || currCol < 0) {
        return;
    }

    if(matr[currRow][currCol] == oldSym) {
        matr[currRow][currCol] = newSym;
    } else {
        return;
    }
    
    printMatrix(matr, cols, rows);
    std::cout << std::endl;
    std::cout << "-------------------------------";
    std::cout << std::endl;

    paint(matr, rows, cols, currRow + 1, currCol, oldSym, newSym);
    paint(matr, rows, cols, currRow - 1, currCol, oldSym, newSym);
    paint(matr, rows, cols, currRow, currCol + 1, oldSym, newSym);
    paint(matr, rows, cols, currRow, currCol - 1, oldSym, newSym);
}


void initializeMatrix(char matr[][MAX_SIZE], int cols, int rows) {
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matr[i][j];
        }
    }
}


int main() {
    char matr[MAX_SIZE] [MAX_SIZE], newSym;
    int rowSize, colSize;
    int startX, startY;

    std::cout << "Enter matrix size" << std::endl;
    std::cin >> rowSize >> colSize;

    initializeMatrix(matr, colSize, rowSize);

    std::cout << "Enter the coordinates(x,y) of the cell you want to paint"  << std::endl;
    std::cin >> startX >> startY;

    std::cout << "Enter the new symbol you want to change it to:" << std::endl;
    std::cin >> newSym;

    paint(matr, rowSize, colSize, startX, startY, matr[startX][startY], newSym);
    printMatrix(matr, colSize, rowSize);

    return 0;
}