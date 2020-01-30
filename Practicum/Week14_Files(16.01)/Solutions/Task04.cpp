#include <iostream>
#include <fstream>

const int N = 100;

struct Book
{
    char name[N];
    char author[N];
    double price;
};

struct Student
{
    char name[N];
    unsigned fn;
    int courseNum;
    short group;
    Book *book;
};

Book *createBook()
{
    Book *book = new Book();

    //used in order to input the name correctly
    std::cin.get();

    std::cout << "Enter a book name: ";
    std::cin.getline((*book).name, N);

    std::cout << "Enter a book author: ";
    std::cin.getline((*book).author, N);

    std::cout << "Enter a book price: ";
    std::cin >> (*book).price;

    return book;
}

Student createStudent()
{
    Student student;

    //used in order to input the name correctly
    std::cin.get();

    std::cout << "Enter a name: ";
    std::cin.getline(student.name, N);

    std::cout << "Enter a faculty number: ";
    std::cin >> student.fn;

    std::cout << "Enter a course: ";
    std::cin >> student.courseNum;

    std::cout << "Enter a group: ";
    std::cin >> student.group;

    student.book = createBook();

    return student;
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
        out << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << " "
            << (*students[i].book).name << " " << (*students[i].book).author << " " << (*students[i].book).price << std::endl;
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

        students[i].book = new Book();

        in >> (*students[i].book).name;
        in >> (*students[i].book).author;
        in >> (*students[i].book).price;
    }

    return students;
}

void print(Student *students, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << students[i].name << " " << students[i].fn << " " << students[i].courseNum << " " << students[i].group << " "
                  << (*students[i].book).name << " " << (*students[i].book).author << " " << (*students[i].book).price << std::endl;
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
    delete[] studentsFromFile;
}