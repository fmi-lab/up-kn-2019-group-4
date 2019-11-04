#include <iostream>
using namespace std;

int main() {

    string seasons[4] = {"spring", "summer", "autumn", "winter"};
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "Season is: " << seasons[number];
}