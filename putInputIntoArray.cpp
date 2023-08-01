#include <iostream>

int main()
{
    std::string foods[5];

    int size = sizeof(foods)/sizeof(foods[0]);

    std::string temp;

    std::cout << '\n';
    std::cout << "'q' to exit" << '\n';

    for (int i = 0; i < size; i++)
    {
        std::cout << "Food " << i << ": ";
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << '\n';


    std::cout << "You like:\n";

    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }
    
    std::cout << '\n';
}