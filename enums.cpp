#include <iostream>

// declare

enum Day 
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

enum Flavor
{
    vanilla,
    chocolate,
    strawberry,
    mint
};

int main()
{
    /*
    
        enums = A user-defined datatype that consists of paired 
        named-integer constants. GREAT if you have a set of 
        potential options.
    
    */

    Day today = sunday;

    switch (today)
    {
        case sunday:
            std::cout << "It's Sunday!\n";
            break;
        case monday:
            std::cout << "It's Sunday!\n";
            break;
        case tuesday:
            std::cout << "It's Sunday!\n";
            break;
        case wednesday:
            std::cout << "It's Sunday!\n";
            break;
        case thursday:
            std::cout << "It's Sunday!\n";
            break;
        case friday:
            std::cout << "It's Sunday!\n";
            break;
        case saturday:
            std::cout << "It's Sunday!\n";
            break;
    }


    return 0;
}