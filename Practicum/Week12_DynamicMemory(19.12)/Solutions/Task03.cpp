#include <iostream>
#include <string.h>

const int SIZE = 5;

char *concat(char *firstString, char *secondString)
{
    char *result = new char[2 * SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        result[i] = firstString[i];
    }

    for (int i = 0, j = SIZE; i < SIZE; i++, j++)
    {
        result[j] = secondString[i];
    }

    return result;
}

int main()
{
    char *startWord = new char[SIZE]{'p', 'e', 's', 'h', 'o'};
    char *addedWord = new char[SIZE]{'E', 'p', 'i', 'c', 'h'};
    char *result;

    result = concat(startWord, addedWord);

    for (int i = 0; i < 2 * SIZE; i++)
    {
        std::cout << result[i];
    }
}