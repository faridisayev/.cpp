#include <iostream>
#include <ctime>

int main()
{
    // seed
    
    srand(time(NULL));

    int random = rand() % 5 + 1;

    switch(random)
    {
        case 1: 
            std::cout << "Bumper sticker\n";
            break;
        case 2: 
            std::cout << "T-shirt\n";
            break;
        case 3: 
            std::cout << "Free lunch\n";
            break;
        case 4: 
            std::cout << "Gift card\n";
            break;
        case 5: 
            std::cout << "Concert tickets\n";
            break;
    }
}