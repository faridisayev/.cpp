#include <iostream>

int myNum = 3;

void printNum();

int main()
{

    printNum();

    return 0;
}

void printNum()
{
    std::cout << '\n';
    std::cout << myNum << '\n';
    std::cout << '\n';
}