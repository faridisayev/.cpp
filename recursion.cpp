#include <iostream>

void walk(int steps);
int factorial(int number);

int main()
{
    /*
    
        Recursion = a programming technique where a function
        invokes itself from within. 

        (iterative vs recursive)

        Advantages = less and cleaner code. Useful for sorting
        and searching algorithms.

        Disadvantages = uses more memory and is slower.
    
    */

    walk(100);

    int number = 3;

    int result = factorial(number);

    std::cout << '\n';
    std::cout << result << '\n';
    std::cout << '\n';

    return 0;
}

void walk(int steps)
{
    if (steps > 0)
    {
        std::cout << "Step!\n";
        walk(steps - 1);
    }
}

int factorial(int number)
{
    if (number > 1)
    {
        return number * factorial(number - 1);
    }
    else 
    {
        return 1;
    }
}