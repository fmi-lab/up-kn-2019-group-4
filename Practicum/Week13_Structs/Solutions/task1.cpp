#include <iostream>

const int N = 100;

struct Student
{
	char name[N];
	unsigned fn;
	unsigned courseNum;
	short group;
};

Student createStudent() {
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

Student* createStudentsArray(int n) {
	Student* students = new Student[n];
	for (int i = 0; i < n; i++) {
		students[i] = createStudent();
	}
	return students;
}

void getStudent(int fn, Student* students, int size) {
	for (int i = 0; i < size; i++) {
		if (fn == students[i].fn) {
			Student currentStudent = students[i];
			std::cout << currentStudent.name << " " << currentStudent.fn << " " <<
				currentStudent.courseNum << " " << currentStudent.group << std::endl;
			return;
		}
	}
	std::cerr << "No such student found" << std::endl;
}

int main() {
	int n;
	std::cout << "Insert a number" << std::endl;
	std::cin >> n;
	Student* students = createStudentsArray(n);
	int fn;
	std::cout << "Which fn do you want to search for?" << std::endl;
	std::cin >> fn;
	getStudent(fn, students, n);
}