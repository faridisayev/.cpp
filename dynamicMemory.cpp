#include <iostream>

int main()
{
    /*
    
        Dynamic Memory = memory that is allocated after the program is already
        compiled and running. Use the 'new' operator to allocate memory in the
        heap rather than the stack.

        Useful when we do not know how much memory we will need. Makes our
        programs flexible, especially when accepting user input.
    
    */

    int *pNum = nullptr;

    // allocate memory

    pNum = new int;

    *pNum = 21;

    std::cout << '\n';
    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';
    std::cout << '\n';

    // free memory

    delete pNum;

    // create dynamic array

    char *pGrades = nullptr;

    int size;

    std::cout << "Size: ";
    std::cin >> size;
    std::cout << '\n';

    pGrades = new char[size];

    // save grades

    for (int i = 0; i < size; i++)
    {
        std::cout << "Grade " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    // display grades

    std::cout << '\n';
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << '\n';
    }
    std::cout << '\n';

    // free memory

    delete[] pGrades;

    return 0;
}