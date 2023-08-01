#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.erase(0, 3);
    // std::cout << erased << '\n';

    // std::cout << name.find(' ') << '\n';

    // name.insert(0, "@");
    // std::cout << name << '\n';

    // std::cout << name.at(1) << '\n';

    // name.append("@gmail.com");
    // std::cout << "Username: " << name << '\n';

    // name.clear();
    // std::cout << "Hello, " << name << "!" << '\n';

    // if (name.empty())
    // {
    //     std::cout << "No name" << '\n';
    // }
    // else 
    // {
    //     std::cout << "Hello " << name << '\n';
    // }

    // if (name.length() > 12)
    // {
    //     std::cout << "Name > 12 chars" << '\n';
    // }
    // else
    // {
    //     std::cout << "Welcome " << name << '\n';
    // }

    return 0;
}