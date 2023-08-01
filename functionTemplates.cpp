#include <iostream>

template <typename X, typename Y>

auto compare(X num1, Y num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    std::cout << compare('a', 1.2) << '\n';
}