#include <iostream>
#include <cmath>

//subtask 1
void subTask1() {
	double sum = 0, x, startX;
	int n, fact = 1;
	std::cout << "Enter n and then x" << std::endl;
	std::cin >> n >> x;
	startX = x;
	for (int i = 0, factCounter = 2; i < n; i++, factCounter += 2) {
		sum += pow(-1,i) * x/fact;
		fact *= (factCounter) * (factCounter + 1);
		x *= startX * startX;
	}
	std::cout << sum;
}


//subtask 2
void subTask2() {
	double sum = 0;
	int n;
	std::cin >> n;
	for (int i = 0, j = 2; i < n; i++, j += (i + 1) * 2) {
		sum = sum + (double) 1 / j;
	}
	std::cout << sum;
}

int main() {
	subTask1();
	//subTask2();
}