#include <iostream>

class Pizza
{
    public:

        std::string topping1;
        std::string topping2;

    Pizza ()
    {

    }
    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    Pizza pizza1;
    Pizza pizza2("pepperoni");
    Pizza pizza3("pepperoni", "mushrooms");

    std::cout << pizza1.topping1 << ", " << pizza1.topping2 << '\n';

    std::cout << pizza2.topping1 << ", " << pizza2.topping2 << '\n';

    std::cout << pizza3.topping1 << ", " << pizza3.topping2 << '\n';

    return 0;
}