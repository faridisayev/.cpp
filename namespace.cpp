#include <iostream>

// create namespace

namespace first 
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // assume using first

    using namespace first;

    // use scope resolution operator

    std::cout << second::x << '\n';

    return 0;
}