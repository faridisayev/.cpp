#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 20000;
    int choice = 0;

    do
    {
        std::cout << '\n';
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "******************\n";
        std::cout << '\n';
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << '\n';

        // stop eternal loop

        std::cin.clear();
        fflush(stdin);

        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!\n";
                std::cout << '\n';
                break;
            default:
                std::cout << "Invalid Choice\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Balance: " << std::setprecision(2) << std::fixed << balance << " USD" << '\n';
}

double deposit()
{
    double amount = 0;

    do
    {
        std::cout << "Deposit: ";
        std::cin >> amount;
    } 
    while (amount < 0);
    
    return amount;
}

double withdraw(double balance)
{
    double amount = 0;

    do 
    {
        std::cout << "Withdraw: ";
        std::cin >> amount;

        if (amount > balance)
        {
            amount = -1;
        }
    }
    while (amount < 0);

    return amount;
}