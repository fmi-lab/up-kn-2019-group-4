#include <iostream>

void printBinary(int N, int K)
{

    if (K == 0)
    {
        return;
    }

    printBinary(N / 2, --K);

    std::cout << N % 2;
}

int main()
{
    int N, K;

    std::cout << "Enter N: ";
    std::cin >> N;

    std::cout << "Enter K: ";
    std::cin >> K;

    printBinary(N, K);
}