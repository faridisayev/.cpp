// prints square rectangle

#include <iostream>

int main()
{
    int height;
    int width;

    do
    {

        std::cout << "h: ";
        std::cin >> height;

        std::cout << "w: ";
        std::cin >> width;

    } while (height < 1 && width < 1);

    std::cout << '\n';
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            std::cout << "* ";
        }

        std::cout << '\n';
    }
    std::cout << '\n';
    
}
