#include <iostream>
#include <cmath>
using namespace std;

void fibonachiN(int n) {
	int a = 1, b = 0, temp;
	if (n == 0) {
		cout << 0;
		return;
	}
	//we start from two because the first two fibonachy numbers are 0 and 1 and we do not want to change a
	for (size_t i = 2; i < n; i++)
	{
		temp = a;
		a = a + b;
		b = temp;
	}
	// we log b because a starts from the second fibonachi number
	cout << a;
}

int main() {
	int n;
	cin >> n;
	fibonachiN(n);
}