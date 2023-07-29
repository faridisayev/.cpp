#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18)
    {
        std::cout << "Not allowed" << "\n";
    }
    else
    {
        std::cout << "Allowed" << "\n";
    }

    return 0;
}