#include <iostream>
using namespace std;

const int N = 4;

int main() {

    int input [N][N] = {{2, 3, 4, 5}, {1, 2, 5, 6}, {5, 6, 7, 8}, {2, 4, 6, 8}};

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << input[i][j] << " ";
        }

        cout << endl;
    }
}