#include <iostream>

class Stove
{
    private:
        int temp = 0;


    public:

    // after declaring getter & setter, make constructor

    Stove(int temp)
    {
        setTemp(temp);
    }

        // getter

        int getTemp()
        {
            return temp;
        }

        // setter

        void setTemp(int temp)
        {
            if (temp < 0)
            {
                this->temp = 0;
            }
            else if (temp >= 10)
            {
                this->temp = 10;
            }
            else 
            {
                this->temp = temp;
            }
        }
};

int main()
{
    /*
    
        Abstraction = hiding unnecessary data from outside a class.

        getter = function that makes a private attaribute READABLE.

        setter = function that makes a private attribute WRITEABLE.
    
    */

    Stove stove(5);

    // stove.temp = 1000000;

    stove.setTemp(5);

    std::cout << "Temp: " << stove.getTemp() << '\n';

    return 0;
}