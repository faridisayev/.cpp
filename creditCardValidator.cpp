// Luhn Algorithm (6011000990139424)

#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;

    int result = 0;

    std::cout << "Card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10)
    {
        std::cout << "Valid" << '\n';
    }
    else 
    {
        std::cout << "Not valid" << '\n';
    }

    return 0;
}

int getDigit(const int number)
{
    int doubledDigit = number * 2;
    return (doubledDigit % 10) + (doubledDigit / 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i-=2)
    {
        sum += getDigit((cardNumber[i] - '0'));
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i-=2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
