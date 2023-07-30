#include <iostream>

int main()
{
    // std::string students[] = {
    //     "Spongebob",
    //     "Patrick",
    //     "Squidward"
    // };

    // for (std::string student : students)
    // {
    //     std::cout << student << '\n';
    // }
    
    int grades[] = {24, 85, 45, 76};

    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }
    
    return 0;
}