#include <iostream>
using namespace std;

int main() {
    int n1, n2, temp;

    cout << "Enter 1st number: ";
    cin >> n1;

    cout << "Enter 2nd number: ";
    cin >> n2;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "1st number is: " << n1 << endl;
    cout << "2nd number is: " << n2;
}