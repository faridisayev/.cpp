# include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********\n";
    std::cout << "\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Number 1: ";
    std::cin >> num1;

    std::cout << "Number 2: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator";
            break;
    }

    std::cout << "Result: " << result << "\n";

    std::cout << "\n";
    std::cout << "********************************\n";
}