#include <iostream>
#include <cmath>
using namespace std;



int main() {
	int arr[100];
	int n;
	std::cin >> n;

	for (size_t i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	unsigned counter = 0, maxCounter = 0, mostOftenNum;

	for (size_t i = 0; i < n; i++) {
		counter = 1;
		//-1 is used to mark an element i have looked at
		if (arr[i] != -1) {
			for (size_t j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j]) {
					counter++;
					arr[j] = -1;
				}
			}
		}

		if (counter > maxCounter) {
			maxCounter = counter;
			mostOftenNum = arr[i];
		}
	}

	std::cout <<"The number: "<< mostOftenNum  << " is the most common in the array and we found it this many times: "<< maxCounter;
}