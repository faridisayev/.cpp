#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    std::string name = "Farid";
    int age = 18;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << '\n';
    std::cout << "Happy birthday " << name << "!" << '\n';
    std::cout << "You are " << age << " years old now" << '\n';
    std::cout << '\n';
}