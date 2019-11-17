#include <iostream>
#include <cmath>
using namespace std;

//creates a trapeze analogous to the previous task but wit a givem start and end;
void trapec(int startStars, int endStars, int interval) {
	
	for (int i = startStars; i <= endStars; i+=2) {
		//the interval is for the tree and should not be used otherwise and set to zero
		//adds more spaces so that the top layer is farther away than the bottom
		for (size_t j = 0; j < interval - i/2 ; j++)
		{
			std::cout << " ";
		}

		for (size_t j = 0; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

//generates a tree with n levels. In bulgarian elha
void elha(int n) {
	//startStars/2 increases with one on every iteration. That is why i use it for the argument lesser than n
	//I want the loop to be executed n times
	for (int startStars = 1, endStars = 5; startStars/2 < n; startStars += 2, endStars += 4) {
		//the interval is n*2 because that gives the bottom most layers (number of stars - 1)/ 2
		//why you might ask? Because we want interval - theLastEndStars/2 == 0 so we have no spaces
		//this means interval == ((n-1) * 4 + startEndStars)/2 -> inteval == 2 * n + (-4 + 5)/2
		//-> interval == 2*n + 1/2 and 1/2  == 0
		trapec(startStars, endStars, n*2);
	}
}

int main() {
	int n;
	cin >> n;
	elha(n);
}