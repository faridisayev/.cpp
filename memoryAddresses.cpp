#include <iostream>

int main()
{

    /*
        memory address = a location in memory where data
        is stored. A memory address can be accessed with &
        (address-of operator)
    */ 

   std::string name = "Bro";

   int age = 21;

   bool student = true;

   std::cout << &name << '\n';
   std::cout << &age << '\n';
   std::cout << &student << '\n';
}