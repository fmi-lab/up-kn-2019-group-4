#include <iostream>
#include <cmath>
using namespace std;

// So here we will write two almost identical functions. This is annoying i know. The idea is that this will
// be solved in the second semester with higher order functions which you can pass on as arguments to functions
// Pointers can also be used

int prod() {
	int n, prod = 1;
	cin >> n;
	while (n != 0) {
		prod *= n;
		cin >> n;
	}
	return prod; 
}

int sum() {
	int n, sum = 0;
	cin >> n;
	while (n != 0) {
		sum += n;
		cin >> n;
	}

	return sum;
}


int main() {
	cout << prod() << endl;
	cout << sum() << endl;
	
}