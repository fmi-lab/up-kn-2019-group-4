#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int x, k;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter k: ";
    cin >> k;

    // Use K as number of multiplications of 10 to divide x and result into 1 digit number
    k = pow(10, k - 1);

    cout << "K digit of X is: " << x / k  % 10;
}