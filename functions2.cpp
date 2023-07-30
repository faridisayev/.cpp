#include <iostream>

std::string full_name(std::string name, std::string surname);

int main()
{
    std::string name = "Farid";
    std::string surname = "Isayev";

    std::string fullName = full_name(name, surname);

    std::cout << '\n';
    std::cout << fullName << '\n';
    std::cout << '\n';

    return 0;
}

std::string full_name(std::string name, std::string surname)
{
    std::string fullName = name + " " + surname;

    return fullName;
}