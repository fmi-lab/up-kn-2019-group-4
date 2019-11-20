#include <iostream>
using namespace std;

int main() {

    int input [7] = {89, -123, 45, 196, 1204, 0, 112};
    int max = input[0];

    for (int i = 1; i < 7; i++) 
    {
        if (max < input[i]) 
        {
            max = input[i];
        }
    }

    cout << "Max is: " << max;

}