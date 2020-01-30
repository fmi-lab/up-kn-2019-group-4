#include <iostream>
#include <fstream>
#include <string.h>

const int N = 100;

struct Book
{
	char name[N];
	char author[N];
	double price;
};

Book *createBookArray(int n)
{
	Book *books = new Book[n];
	for (int i = 0; i < n; i++)
	{
		//used in order to input the name correctly
		std::cin.get();

		std::cout << "Enter a name: ";
		std::cin.getline(books[i].name, 100);

		std::cout << "Enter an author: ";
		std::cin.getline(books[i].author, 100);

		std::cout << "Enter a price: ";
		std::cin >> books[i].price;
	}
	return books;
}

bool compareByName(Book &first, Book &second)
{
	return strcmp(first.name, second.name) >= 0;
}

bool compareByAuthor(Book &first, Book &second)
{
	return strcmp(first.author, second.author) >= 0;
}

bool compareByPrice(Book &first, Book &second)
{
	return first.price >= second.price;
}

void print(Book *books, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << books[i].name << " ";
	}
	std::cout << std::endl;
}

using compareFunc = bool (*)(Book &, Book &);
//I was told you should know higher order functions.
void sortWithHigherOrderFunctions(compareFunc f, Book *books, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (f(books[i], books[j]))
			{
				std::swap(books[i], books[j]);
			}
		}
	}
}

void sort(int sortBy, Book *books, int size)
{
	if (sortBy == 1)
	{
		sortWithHigherOrderFunctions(compareByName, books, size);
	}
	else if (sortBy == 2)
	{
		sortWithHigherOrderFunctions(compareByAuthor, books, size);
	}
	else if (sortBy == 3)
	{
		sortWithHigherOrderFunctions(compareByPrice, books, size);
	}
	else
	{
		std::cerr << "Wrong sorting parameter" << std::endl;
	}

	print(books, size);
}

void saveBooksInFile(Book *books, int size, std::ofstream &out)
{
	for (int i = 0; i < size; i++)
	{
		out << books[i].name << " " << books[i].author << " " << books[i].price << std::endl;
	}
}

Book *getBooksFromFile(int size, std::ifstream &in)
{
	Book *books = new Book[size];

	for (int i = 0; i < size; i++)
	{
		in >> books[i].name;
		in >> books[i].author;
		in >> books[i].price;
	}

	return books;
}

void findBook(Book *books, int size, char *name, char *author)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].name, name) == 0)
		{
			if (strcmp(author, "-") == 0)
			{
				std::cout << books[i].name << " " << books[i].author << " " << books[i].price << std::endl;

				return;
			}
			else if (strcmp(books[i].author, author) == 0)
			{
				std::cout << books[i].name << " " << books[i].author << " " << books[i].price << std::endl;

				return;
			}
		}
	}
}

int main()
{
	std::ofstream out("books.txt");
	std::ifstream in("books.txt");
	char name[N];
	char author[N];
	int n;

	std::cout << "Insert a number" << std::endl;
	std::cin >> n;

	Book *books = createBookArray(n);

	int sortBy;

	std::cout << "What do you want to sort by - 1 for name, 2 for author, 3 for price?" << std::endl;
	std::cin >> sortBy;

	sort(sortBy, books, n);

	saveBooksInFile(books, n, out);

	Book *booksFromFile = getBooksFromFile(n, in);

	std::cout << "Enter book name: ";
	std::cin >> name;

	std::cout << "Enter author (- to skip): ";
	std::cin >> author;

	findBook(booksFromFile, n, name, author);

	delete[] books;
	delete[] booksFromFile;
}