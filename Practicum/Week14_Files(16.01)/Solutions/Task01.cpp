#include <iostream>
#include <fstream>

const int N = 100;

struct Student
{
	char name[N];
	unsigned fn;
	int courseNum;
	short group;
};

Student createStudent()
{
	Student result;

	//used in order to input the name correctly
	std::cin.get();

	std::cout << "Enter a name: ";
	std::cin.getline(result.name, 100);

	std::cout << "Enter a faculty number: ";
	std::cin >> result.fn;

	std::cout << "Enter a course: ";
	std::cin >> result.courseNum;

	std::cout << "Enter a group: ";
	std::cin >> result.group;

	return result;
}

Student *createStudentsArray(int n)
{
	Student *students = new Student[n];
	for (int i = 0; i < n; i++)
	{
		students[i] = createStudent();
	}
	return students;
}

void saveStudentsInFile(Student *students, int size, std::ofstream &out)
{
	for (int i = 0; i < size; i++)
	{
		out << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << std::endl;
	}
}

Student *getStudentsFromFile(int size, std::ifstream &in)
{
	Student *students = new Student[size];

	for (int i = 0; i < size; i++)
	{
		in >> students[i].name;
		in >> students[i].fn;
		in >> students[i].courseNum;
		in >> students[i].group;
	}

	return students;
}

void print(Student *students, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << std::endl;
	}
}

int main()
{
	int n;
	std::ofstream out("students.txt");
	std::ifstream in("students.txt");

	std::cout << "Insert number of students: " << std::endl;
	std::cin >> n;

	Student *students = createStudentsArray(n);

	saveStudentsInFile(students, n, out);

	Student *studentsFromFile = getStudentsFromFile(n, in);

	print(studentsFromFile, n);

	delete[] students;
}