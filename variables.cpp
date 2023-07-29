#include <iostream>

int main()
{
    // integer 

    int age = 21;
    int year = 2023;
    // int days = 7.5; gets truncated

    // double 

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single char

    char grade = 'A';
    // char initial = 'BC'; gets truncated
    char currency = '$';

    // boolean

    bool student = true;
    bool power = false;
    bool forSale = true;

    // string

    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake Str.";
    std::cout << address << '\n';

    // string literal

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}