#include <iostream>

int main()
{
    int number;

    do
    {

        std::cout << "Positive number: ";
        std::cin >> number;

    } while (number <= 0);
    

    std::cout << "Number is " << number << '\n';

    return 0;
}