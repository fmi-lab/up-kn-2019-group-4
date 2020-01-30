//The bonus task requires a bit of knowledge of OOP to do properly. 
// You can solve it but you will not need it for the exam, so I will not look at it
#include <iostream>
#include <string.h>

const int N = 100;

enum Type { Predator, Pray };

struct Animal {
	char name[N];
	Type type;
	int powerLevel;
	Animal* harem;
	int haremSize;
};

void fight(Animal first, Animal second) {
	if (first.type == Pray && second.type == Pray) {
		std::cout << "We love Jesus (I know it's prey, not pray, leave me alone)" << std::endl;
	}
	else if (first.type == Pray) {
		std::cout << "The second animal eats the first" << std::endl;
	}
	else if (second.type == Pray) {
		std::cout << "The first animal eats the second" << std::endl;
	}
	else {
		if (first.powerLevel >= second.powerLevel) {
			std::cout << "The first animal wins" << std::endl;
		}
		else {
			std::cout << "The second animal wins" << std::endl;
		}
	}
}

Animal createAnimal() {
	Animal animal;
	std::cout << "Enter an animal's name: ";
	std::cin.getline(animal.name,N);
	char type[N];
	std::cout << "Enter an animal's type: predator or prey! ";
	std::cin.getline(type, N);
	if (strcmp(type,"pray") == 0) {
 		animal.type = Pray;
	} else {
		animal.type = Predator;
	}
	std::cout << "Enter an animal's power level: ";
	std::cin >> animal.powerLevel;
	//Makes sure I remove the newline symbol from std:cin
	std::cin.get();
	//The harem is a part of the next task and is unneeded for this one.
	animal.harem = nullptr;
	animal.haremSize = 0;
	return animal;
}

int main() {
	Animal first = createAnimal();
	Animal second = createAnimal();
	fight(first, second);
}