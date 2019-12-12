#include <iostream>
#include<string.h>

const int MAX_SIZE = 100;

int myMin(int a, int b) { return (a < b) ? a : b; }

int hammingDistance(char * firstString, char * secondString) {
    int size1 = strlen(firstString);
    int size2 = strlen(secondString);
    //difference in size counts towards Hamming Distance.
    int dist = abs(size1 - size2);
    int size = myMin(size1, size2);

    for(int i = 0; i < size; i++) {
        if(firstString[i] != secondString[i]) {
            dist++;
        }
    }
    
    return dist;
}

int main() {
    char firsString[MAX_SIZE];
    char secondString[MAX_SIZE];

    std::cin.getline(firsString, MAX_SIZE);
    std::cin.getline(secondString, MAX_SIZE);
    std::cout << hammingDistance(firsString, secondString);
}