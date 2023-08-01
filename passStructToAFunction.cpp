#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);
void paintCar(Car &car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "X";
    car1.year = 2023;
    car1.color = "SpaceGray";

    car2.model = "Y";
    car2.year = 2020;
    car2.color = "Cherry";

    std::cout << &car1 << '\n';

    printCar(car1);

    paintCar(car1, "Black");

    printCar(car1);

    return 0;
}

// we are working with a copy, to work with struct itself, use &

void printCar(Car car)
{
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color)
{
    car.color = color;
}