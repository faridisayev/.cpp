#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << '\n';
    std::cout << "***** Temperature conversion *****\n";
    std::cout << '\n';

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    
    std::cout << "To unit: ";
    std::cin >> unit;

    std::cout << "Value: ";
    std::cin >> temp;

    if (!temp)
    {
        std::cout << "Invalid temperature\n";
        return 1;
    }

    if (unit == 'F' || unit == 'f')
    {
        temp = (temp * (9/5)) + 32;
    }
    else if (unit == 'C' || unit == 'c')
    {
        temp = (temp - 32) * (5/9);
    }
    else
    {
        std::cout << "Invalid unit\n";
    }

    std::cout << "Temperature (" << unit << "): " << temp << '\n';

    std::cout << '\n';
    std::cout << "**********************************\n";
    std::cout << '\n';
}