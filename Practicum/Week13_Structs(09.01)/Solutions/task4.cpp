#include <iostream>
#include <string.h>

const int N = 100;
struct Person {
	char name[N];
	char catName[N];
	char dogName[N];
	char giraffeName[N];
	Person* father;
	Person* mother;
	Person* children;
	int childrenCount;
};

void getSiblingWithoutMyself(Person person, Person* allSiblings, int siblingsCount) {
	for (int i = 0; i < siblingsCount; i++) {
		if (strcmp(person.name, allSiblings[i].name) != 0) {
			Person sibling = allSiblings[i];
			std::cout << "Sibling with name " << sibling.name << std::endl;
		}
	}
}

void getSiblings(Person person) {
	if (person.mother != nullptr && person.father != nullptr) {
		if (person.mother->childrenCount > person.father->childrenCount) {
			getSiblingWithoutMyself(person, person.mother->children, person.mother->childrenCount);
		}
		else {
			getSiblingWithoutMyself(person, person.father->children, person.father->childrenCount);
		}
	}
	//either has no mother or father or they are unknow(probably no Jesus)
	else if (person.mother != nullptr) {
		getSiblingWithoutMyself(person, person.mother->children, person.mother->childrenCount);
	}
	else if (person.father != nullptr) {
		getSiblingWithoutMyself(person, person.father->children, person.father->childrenCount);
	}
	//Your parents are unknown
	else {
		std::cout << "No siblings :(" << std::endl;
	}
}

Person* inputChildren(int& childrenCount) {
	int i = childrenCount; //i starts from children count so you can keep old children and add new
	std::cout << "Enter your children count: " << std::endl;
	std::cin >> childrenCount;
	while (i + childrenCount > 100 || childrenCount < 0) {
		std::cout << "You a baby making machine! Please be more modest. A " << childrenCount << "children is a bit too much " << std::endl;
		std::cin >> childrenCount;
	}

	//reads newline character from buffer
	std::cin.get();

	if(childrenCount == 0) {
		return nullptr;
	}

	Person * children = new Person [childrenCount];

	while (i < childrenCount) {
		std::cout << "Enter your childName: ";
		std::cin.getline(children[i].name, N);
		i++;
	}

	return children;
}

Person createPerson() {
	std::cout << "Enter in this order: your name, your giraffe, cat, dog, mother, father names" << std::endl;
	Person prson;
	std::cin.getline(prson.name, N);
	std::cin.getline(prson.giraffeName, N);
	std::cin.getline(prson.catName, N);
	std::cin.getline(prson.dogName, N);

	prson.mother = new Person();
	std::cin.getline(prson.mother->name, N);
	prson.father = new Person();
	std::cin.getline(prson.father->name, N);
	prson.children = inputChildren(prson.childrenCount);
	
	return prson;
}


void tests() {
	Person me = createPerson();
	std::cout << "Enter the number of children of your mother and father in this order. " << std::endl;
	std::cout << "You are not added as a child of your parents by default. Add yourself if you want! " << std::endl;
	me.mother->children = inputChildren(me.mother->childrenCount);
	me.father->children = inputChildren(me.father->childrenCount);
	std::cout << std::endl;

	getSiblings(me);
	delete[] me.mother->children;
	delete me.mother;
	
	std::cout << std::endl << "Test case no mother: " << std::endl;
	me.mother = nullptr;
	getSiblings(me);

	delete[] me.father->children;
	delete me.father;
	me.father = nullptr;

	std::cout << std::endl << "Test case no parents: " << std::endl;
	getSiblings(me);

	delete[] me.children;
}

int main() {
	tests();
}