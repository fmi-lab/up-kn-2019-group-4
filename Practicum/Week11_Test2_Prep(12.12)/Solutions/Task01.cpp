#include <iostream>
#include <string.h>

const int MAX_SIZE = 205;

void findFirstSameLetter(char *text)
{
    int length = strlen(text);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (text[i] == text[j])
            {
                std::cout << i + 1 << " - " << j + 1;
                return;
            }
        }
    }

    std::cout << "No matching letters!";
}

int main()
{
    char text[MAX_SIZE];

    std::cout << "Enter text: ";
    std::cin.getline(text, MAX_SIZE);

    findFirstSameLetter(text);
}