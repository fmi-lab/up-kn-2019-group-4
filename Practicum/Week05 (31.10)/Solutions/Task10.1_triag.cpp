#include <iostream>
#include <cmath>
using namespace std;


//i starts as one because we have one start at the start
//we want two to be added to i because that is how the stars grow. On every row we add two more
//but that is an issue because we want the for to be executed n times
// because of that we divide i by two in the predicate i/2 < n
void ravnobedrenTriag(int n) {
	
	for(int i = 1; i/2 < n; i+=2) {
	// we want at least n - 1 spaces before the first star. When we add another to the left of it we need n-2 spaces and so on
	// that increases in increments of 1 like i/2. So we remove it n-i/2 and the one comes from the initial n - 1 value needed. So we get n-i/2-1
		for (size_t j = 0; j < n - i/2 - 1; j++) 
		{
			std::cout << " ";
		}

		for (size_t j = 0; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout<<std::endl;
	}
}



int main() {
	int n;
	cin >> n;
	ravnobedrenTriag(n);
}