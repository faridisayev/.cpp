#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
int choiceToScore(char choice);

int main()
{

    char player;
    char computer;
    std::string win_message;

    player = getUserChoice();

    std::cout << '\n';
    std::cout << "Your choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);
    std::cout << '\n';

    int playerScore = choiceToScore(player);
    int computerScore = choiceToScore(computer);

    if (playerScore > computerScore)
    {
        win_message = "Player wins!";
    }
    else if (playerScore < computerScore)
    {
        win_message = "Computer wins!";
    }
    else
    {
        win_message = "It is a tie!";
    }

    std::cout << '\n';
    std::cout << win_message << '\n';
    std::cout << '\n';

    return 0;
}

char getUserChoice()
{
    char player;

    std::cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        std::cout << '\n';
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cout << "*************************\n";
        std::cout << '\n';
        std::cout << "Choose one of the above: ";
        std::cin >> player;
        std::cout << '\n';
    
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(NULL));

    int random;
    char choice;

    random = rand() % 3 + 1;

    switch(random)
    {
        case 1:
            choice = 'r';
            break;
        case 2:
            choice = 'p';
            break;
        case 3:
            choice = 's';
            break;
    }

    return choice;
}

void showChoice(char choice)
{
    switch(choice)
    {
        case 'r':
            std::cout << "Rock" << '\n';
            break;
        case 'p':
            std::cout << "Paper" << '\n';
            break;
        case 's':
            std::cout << "Scissors" << '\n';
            break;
    }
}

int choiceToScore(char choice)
{
    int choiceScore;

    switch(choice)
    {
        case 'r':
            choiceScore = 1;
            break;
        case 'p':
            choiceScore = 2;
            break;
        case 's':
            choiceScore = 3;
            break;
    }

    return choiceScore;
}