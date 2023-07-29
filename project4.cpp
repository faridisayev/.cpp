// Number guessing game

#include <iostream>
#include <ctime>

int main()
{
    std::cout << '\n';
    std::cout << "*****************************************\n";

    srand(time(NULL));

    int number;
    int guess;
    int score;

    // 1-10

    number = rand() % 10 + 1;
    score = 100;

    std::cout << '\n';
    
    do 
    {
        if (score == 0)
        {
            std::cout << "Game over!\n";
            return 1;
        }

        score -= 10;
        std::cout << "Guess: ";
        std::cin >> guess;
    }
    while (guess != number);

    std::cout << '\n';
    std::cout << "Congratulations!\n";
    std::cout << "Score: " << score << '\n';
    std::cout << '\n';

    std::cout << "*****************************************\n";
    std::cout << '\n';

    return 0;
}