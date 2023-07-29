#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "Good\n";
    }
    else
    {
        std::cout << "Bad\n";
    }

    std::cout << "Not sunny: " << ((!sunny) ? "true" : "false") << '\n';

    return 0;
}