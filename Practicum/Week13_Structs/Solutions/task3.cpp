#include <iostream>
const int N = 100;

struct Grades {
	int tests[2];
	int homeworks[3];
	int writtenExam;
	int oralExam;
};

struct Student {
	char * name;
	int fn;
	Grades grades;
};

Grades inputGrades() {
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

double finalGrade(Grades grades) {
	return (grades.tests[0] + grades.tests[1] + (grades.homeworks[0] + grades.homeworks[1] + grades.homeworks[2]) / 3) / 3 * 0.5
		+ (grades.writtenExam + grades.oralExam) / 2 * 0.5;
}

Student inputStudent() {
	Student student;
	student.name = new char[N];
	
	std::cout << "Enter student name: ";
	std::cin.getline(student.name, N);
	
	std::cout << "Enter student fn: ";
	std::cin >> student.fn;
	
	std::cout << "Enter student grades: " << std::endl;
	student.grades = inputGrades();
	
	return student;
}

int main() {
	Student student;
	student = inputStudent();

	double grade = finalGrade(student.grades);
	std::cout << grade << std::endl;
	delete[] student.name;
}
