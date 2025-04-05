#include <iostream>
#include <string>

enum class education_level {elementary, secondary, highschool, university};

struct student_id {
    std::string name;
    int age;
    education_level level;
};

int main() {
    student_id first_student;
    first_student.name = "Minh Anh";
    first_student.age = 19;
    first_student.level = education_level::university;

    std::cout << "My name is " << first_student.name << " and I am " << first_student.age << "." << " The number of my education_level is " << (int)first_student.level << "." << std::endl;
    return 0;
}