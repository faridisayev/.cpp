#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "a: ";
    std::cin >> a;

    std::cout << "b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    std::cout << "c: " << c << '\n';

    return 0;
}