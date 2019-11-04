#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x = n % 10;
	int y = (n / 10) % 10;
	int z = n / 100;

	if (x == y || y == z || z == x) {
		cout << "True";
		
	} else cout << "False";
}