#include <iostream>
using namespace std;

int main() {
    
    int input [7] = {89, -123, 45, 196, 1204, 0, 112};
    int sum = 0;

    for (int i = 0; i < 7; i++) 
    {
        sum += input[i];
    }

    cout << "Sum is: " << sum;
}