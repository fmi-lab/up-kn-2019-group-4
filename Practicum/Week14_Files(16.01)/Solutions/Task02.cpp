#include <iostream>
#include <fstream>

const int N = 100;

struct Grades
{
	int tests[2];
	int homeworks[3];
	int writtenExam;
	int oralExam;
};

struct Student
{
	char *name;
	int fn;
	int courseNum;
	short group;
	Grades grades;
	double finalGrade;
};

double finalGrade(Grades grades)
{
	return (double)(grades.tests[0] + grades.tests[1] + (double)(grades.homeworks[0] + grades.homeworks[1] + grades.homeworks[2]) / 3) / 3 * 0.5 + (grades.writtenExam + grades.oralExam) / 2 * 0.5;
}

Grades inputGrades()
{
	Grades grades;

	std::cout << "Please insert result from test #1: ";
	std::cin >> grades.tests[0];

	std::cout << "Please insert result from test #2: ";
	std::cin >> grades.tests[1];

	std::cout << "Please insert result from homework #1: ";
	std::cin >> grades.homeworks[0];

	std::cout << "Please insert result from homework #2: ";
	std::cin >> grades.homeworks[1];

	std::cout << "Please insert result from homework #3: ";
	std::cin >> grades.homeworks[2];

	std::cout << "Please insert result from the written exam: ";
	std::cin >> grades.writtenExam;

	std::cout << "Please insert result from the oral exam: ";
	std::cin >> grades.oralExam;

	return grades;
}

Student inputStudent()
{
	Student student;
	student.name = new char[N];

	//used in order to input the name correctly
	std::cin.get();

	std::cout << "Enter a name: ";
	std::cin.getline(student.name, 100);

	std::cout << "Enter a faculty number: ";
	std::cin >> student.fn;

	std::cout << "Enter a course: ";
	std::cin >> student.courseNum;

	std::cout << "Enter a group: ";
	std::cin >> student.group;

	std::cout << "Enter student grades: " << std::endl;
	student.grades = inputGrades();

	std::cout << std::endl
			  << finalGrade(student.grades) << std::endl;
	student.finalGrade = finalGrade(student.grades);

	return student;
}

Student *inputStudentsArray(int n)
{
	Student *students = new Student[n];
	for (int i = 0; i < n; i++)
	{
		students[i] = inputStudent();
	}
	return students;
}

void saveStudentsInFile(Student *students, int size, std::ofstream &out)
{
	for (int i = 0; i < size; i++)
	{
		out << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << " " << students[i].finalGrade << std::endl;
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
		in >> students[i].finalGrade;
	}

	return students;
}

void findStudent(Student *students, int size, int fn)
{
	for (int i = 0; i < size; i++)
	{
		if (students[i].fn == fn)
		{
			std::cout << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << " " << students[i].finalGrade << std::endl;
			break;
		}
	}
}

int main()
{
	int n;
	int fn;
	std::ofstream out("students.txt");
	std::ifstream in("students.txt");

	std::cout << "Insert number of students: " << std::endl;
	std::cin >> n;

	Student *students = inputStudentsArray(n);

	saveStudentsInFile(students, n, out);

	std::cout << "Insert faculty number: " << std::endl;
	std::cin >> fn;

	Student *studentsFromFile = getStudentsFromFile(n, in);

	findStudent(studentsFromFile, n, fn);

	delete[] students;
}
