#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 5;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, 3);
    z = sqrt(9);
    z = abs(-3);
    z = round(x);
    z = ceil(x);
    z = floor(x);

    std::cout << z << '\n';

    return 0;
}
