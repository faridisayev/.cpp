#include <iostream>

int main()
{
    /*
    
        pointer = a variable that stores a memory address of another
        variable.

        & = address-of operator

        * = dereference operator
    */

    std::string name = "Bro";

    std::string *pName = &name;

    std::string freepizzas[] = {
        "pizza1",
        "pizza2",
        "pizza3",
        "pizza4",
        "pizza5"
    };

    std::string *pFreepizzas = freepizzas;

    std::cout << name << '\n';

    std::cout << pName << '\n';

    std::cout << *pName << '\n';

    // already an address

    std::cout << freepizzas << '\n';

    std::cout << pFreepizzas << '\n';

    std::cout << *pFreepizzas << '\n';

    return 0;
}