#include<iostream>
#include<cstring>

struct PersonalName{
    char first[21];
    char second[21];
    char third[21];
};

void init_name(PersonalName& p_name){
    std::cin >> p_name.first;
    std::cin >> p_name.second;
    std::cin >> p_name.third;
}

void print_name(const PersonalName& p_name){
    std::cout << p_name.first << " " << p_name.second << " " << p_name.third << std::endl;
}

struct Student{
    PersonalName student_name;
    int faculty_number;
    double grades[4];
};

void init_student_grades(Student& st) {
    for(int i = 0; i < 4; i++){
        std::cin >> st.grades[i];
    }
}

void init_student(Student& st){
    init_name(st.student_name);
    init_student_grades(st);
    do {
        std::cin >> st.faculty_number;
    } while(st.faculty_number < 80000 || st.faculty_number > 90000);
}

void print_student(const Student& st){
    print_name(st.student_name);
    std::cout << st.faculty_number << std::endl;
    for(int i=0; i<4; i++){
        std::cout << st.grades[i] << " ";
    }
    std::cout << std::endl;
}

double get_avg_grades(const Student& st){
    double sum = 0;
    for(int i = 0; i< 4; i++){
        sum += st.grades[i];
    }
    return sum / 4;
}
void find_best_student(const Student*& students, const size_t& size){
    if(!students) {
        return;
    }
    int index_max = 0;
    for(int i = 1; i < size; i++){
        if(get_avg_grades(students[i]) > get_avg_grades(students[index_max]) ){
            index_max = i;
        }
    }
    print_student(students[index_max]);
}

using predicate = bool (*)(const Student&);

void filter_students(const Student* students, const size_t& size, predicate p){
    for(int i=0; i < size; i++){
        if(p(students[i])){
            print_student(students[i]);
        }
    } 
}

using comparator = bool (*) (const Student& first, const Student& second);

void swap_students(Student& first, Student& second){
    Student temp = first;
    first = second;
    second = temp;
}

void sort_students(Student* start, Student* end, comparator compare){
    for(Student* current = start; current < end - 1; current++){
        for(Student* next = current + 1; next < end; next++){
            if(compare(*current, *next)){
                swap_students(*current, *next);
            }
        }
    }
}

bool has_even_faculty_number(const Student& st){
    return st.faculty_number % 2 == 0;
}

bool compare_students(const Student& first, const Student& second){
    return first.faculty_number > second.faculty_number && get_avg_grades(first) > get_avg_grades(second);
}
int main() {
    Student* students = new Student[3];
    strcpy(students[0].student_name.first, "Ivan");
    strcpy(students[0].student_name.second, "Ivanov");
    strcpy(students[0].student_name.third, "Ivanov");
    students[0].faculty_number = 86000;
    students[0].grades[0] = 6;
    students[0].grades[1] = 6;
    students[0].grades[2] = 6;
    students[0].grades[3] = 6;

    strcpy(students[1].student_name.first, "George");
    strcpy(students[1].student_name.second, "Georgiev");
    strcpy(students[1].student_name.third, "Georgiev");
    students[1].faculty_number = 85000;
    students[1].grades[0] = 5;
    students[1].grades[1] = 5;
    students[1].grades[2] = 5;
    students[1].grades[3] = 5;

    strcpy(students[2].student_name.first, "Boyan");
    strcpy(students[2].student_name.second, "Boyanov");
    strcpy(students[2].student_name.third, "Boyanov");
    students[2].faculty_number = 84000;
    students[2].grades[0] = 4;
    students[2].grades[1] = 4;
    students[2].grades[2] = 4;
    students[2].grades[3] = 4;

    filter_students(students, 3, has_even_faculty_number);
    sort_students(students, students + 3, compare_students);
    return 0;
}