// OOP

#include <iostream>

class Human
{
    public:

        // available values

        std::string name;
        std::string occupation;
        int age;

        // methods

        void eat()
        {
            std::cout << "Eating\n";
        }

        void drink()
        {
            std::cout << "Drinking\n";
        }

        void sleep()
        {
            std::cout << "Sleeping\n";
        }
};

int main()
{
    Human human1;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();
    

    return 0;
}