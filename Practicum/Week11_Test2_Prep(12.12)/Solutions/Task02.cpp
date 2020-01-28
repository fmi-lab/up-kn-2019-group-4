#include <iostream>

const int N = 10;

void inputMatrix(int n, int matrix[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void makeDominant(int n, int matrix[][N])
{
    int rowSum = 0;

    for (int i = 0; i < n; i++)
    {
        rowSum = 0;

        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                rowSum += abs(matrix[i][j]);
            }
        }

        if (abs(matrix[i][i]) < rowSum)
        {
            if (matrix[i][i] >= 0)
            {
                matrix[i][i] += rowSum - matrix[i][i];
            }
            else
            {
                matrix[i][i] -= rowSum + matrix[i][i];
            }
        }
    }
}

void print(int n, int matrix[][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    int matrix[N][N];

    std::cout << "Enter size of matrix (< 10): ";
    std::cin >> n;

    inputMatrix(n, matrix);

    makeDominant(n, matrix);

    print(n, matrix);
}