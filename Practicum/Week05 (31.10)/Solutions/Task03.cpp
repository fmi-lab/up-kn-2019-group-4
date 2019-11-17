#include <iostream>
using namespace std;

bool isPrimeNumber(int x) {
	if (x == 1) {
        return false;
    }
	
    for (int i = 2; i <= x / 2; i++) 
    {
		    if (x % i == 0) {
           return false; 
        } 
	}

	return true;
}

int main() {

    int input [7] = {13, 14, 25, 16, 55, 97, 900};
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        sum += input[i];
    }

    cout << "Sum is: " << sum << endl;

    for (int i = 2; i <= sum / 2; i++) {
		if (sum % i == 0 && isPrimeNumber(i)) {
			cout << i << " ";
		}
	}
}