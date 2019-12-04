#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

int numSize(int n) {
    int counter = 0;
    while(n/10) {
        counter++;
        n = n/10;
    }
    return ++counter;
}

void printArray(int arr[MAX_SIZE], int actualSize) {
    
    for(int i = 0; i < actualSize; i++) {
        std::cout << arr[i] << " ";

    }
    std::cout << std::endl;
}

void multVectors(int arr1[MAX_SIZE], int arr2[MAX_SIZE], int actualSize) {
    int result[MAX_SIZE];

    for(int i = 0; i < actualSize; i++) {
        result[i] = arr1[i] * arr2[i];    
    }

    printArray(result, actualSize);
}

int main() {
    int n, subArr1[100], subArr2[100];
    std::cout << "Enter a number: ";
    std::cin >> n;

    //I will change this length
    int length = numSize(n);
    int startLength = numSize(n);
    int subArraySize = 0;
    
    while(length > 2) {
        subArr1[subArraySize] = n/pow(10, length - 1);
        subArr2[subArraySize] = n % 10;
        n = n % (int)pow(10, length - 1);
        n = n/10;
        length -= 2;
        subArraySize++;
    }

    //reverse the second array
    for(int i = 0; i < subArraySize/2; i++) {
        int temp = subArr2[i];
        subArr2[i] = subArr2[subArraySize - i - 1];
        subArr2[subArraySize - i - 1] = temp;
    }
    std::cout << "Array1: " << std::endl;
    printArray(subArr1, subArraySize);
    std::cout << "Array2: " << std::endl;
    printArray(subArr2, subArraySize);
    std::cout << "Result: " << std::endl;
    multVectors(subArr1, subArr2, subArraySize);

    return 0;
}