#include <iostream>

int main()
{
    int month;
    std::cout << "Month (0-12): ";
    std::cin >> month;

    switch (month)
    {
        case 1:
            std::cout << "It is January" << '\n';
            break;
        case 2:
            std::cout << "It is February" << '\n';
            break;
        case 3:
            std::cout << "It is March" << '\n';
            break;
        case 4:
            std::cout << "It is April" << '\n';
            break;
        case 5:
            std::cout << "It is May" << '\n';
            break;
        case 6:
            std::cout << "It is June" << '\n';
            break;
        case 7:
            std::cout << "It is Jule" << '\n';
            break;
        case 8:
            std::cout << "It is August" << '\n';
            break;
        case 9:
            std::cout << "It is September" << '\n';
            break;
        case 10:
            std::cout << "It is October" << '\n';
            break;
        case 11:
            std::cout << "It is November" << '\n';
            break;
        case 12:
            std::cout << "It is December" << '\n';
            break;
        default:
            std::cout << "Invalid input" << '\n';
            break;
    }
    return 0;
}