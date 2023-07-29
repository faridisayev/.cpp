/*
    typedef - reserved keyword used to create an additional name (alias)
    for another data type. New identifier for an existing type helps with readability 
    and reduces typos. Replaced with 'using' (work better w/ templates).
*/

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    text_t name = "Farid";
    number_t age = 21;

    std::cout << "Name " << name << '\n';
    std::cout << "Age " << age << '\n';

    return 0;
}