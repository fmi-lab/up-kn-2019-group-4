#include <iostream>
using namespace std;

const int N = 5;

int main() {

    int input [N][N] = {{48, 72, 13, 14, 15}, {21, 22, 53, 24, 75}, {31, 57, 33, 34, 35}, {41, 95, 43, 44, 45}, {59, 52, 53, 54, 55}};
    int min, max;

    min = input[0][0];
    max = input[0][0];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (min > input[i][j])
            {
                min = input[i][j];
            } else if (max < input[i][j]) {
                max = input[i][j];
            }
        }
    }

    cout << "Min is: " << min << endl;
    cout << "Max is: " << max;
}