#include <iostream>
using namespace std;

int findDiff(int firstDigit, int secondDigit)
{
    int firstNum = firstDigit * 10 + secondDigit;
    int secondNum = secondDigit * 10 + firstDigit;

    return secondNum - firstNum;
}

int findNumber(int sum, int diff, int num)
{
    int firstDigit = num / 10;
    int secondDigit = num % 10;

    if (firstDigit + secondDigit == sum && findDiff(firstDigit, secondDigit) == diff)
    {
        return num;
    }

    findNumber(sum, diff, ++num);
}

int main()
{
    int sum, diff;

    cout << "Enter sum: ";
    cin >> sum;

    cout << "Enter diff: ";
    cin >> diff;

    cout << findNumber(sum, diff, 10);
}
