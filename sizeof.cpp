#include <iostream>

int main()
{
    // double gpa = 2.5;
    // std::cout << sizeof(gpa) << " bytes\n";

    // std::string name = "Bro";
    // std::cout << sizeof(name) << " bytes\n";

    // char grade = 'F';
    // std::cout << sizeof(grade) << " bytes\n";

    // bool student = true;
    // std::cout << sizeof(student) << " bytes\n";

    // char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    // std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}