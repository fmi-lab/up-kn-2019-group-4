#include <iostream>

const int N = 100;

void inputMatrix(char matrix[][N], int rows, int columns)
{
    std::cout << "Enter matrix: " << std::endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

char* rowWithSymbol(char matrix[][N], int rows, int columns, char symbol)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == symbol)
            {
                return matrix[i];
            }
        }
    }

    return nullptr;
}

void printRow(char *row, int columns)
{
    for (int i = 0; i < columns; i++)
    {
        std::cout << row[i] << " ";
    }
}

int main()
{
    int rows, columns;
    char matrix[N][N];
    char symbol;
    char *row;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    inputMatrix(matrix, rows, columns);

    std::cout << "Enter symbol to find: ";
    std::cin >> symbol;

    row = rowWithSymbol(matrix, rows, columns, symbol);

    printRow(row, columns);
}