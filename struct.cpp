#include <iostream>

// like a datatype

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    /*
    
        Struct = A structure that groups related variables under one name.
        Structs can contain many different data types (string, int, double, bool, etc.).

        Variables in a struct are known as "members".
        Members can be accessed with . "Class Member Access Operator".
    
    */

    student student1;

    student1.name = "Spongebob";

    student1.gpa = 3.2;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    student student2;

    student2.name = "Patrick";

    student2.gpa = 3.1;

    student2.enrolled = false;

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}