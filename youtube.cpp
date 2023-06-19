
#include<iostream> 
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

void print_array(int array[],int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
    
    cout << "\n";
}

void play_game()
{
    int guesses [251];
    int guess_count = 0;

    int random = rand() % 251;
    cout << random << std::endl;
    cout <<"guess the number: ";
    while (true)
    {
        int guess;
        cin >> guess;

        guesses[guess_count++]= guess;//user array

        if (guess == random)
        {
            cout << "you win!\n";
            cout << "guessed numbers: ";
            break;
        }else if (guess < random)
        {
            cout << "to low\n";
            cout << "try again: ";
        }else
        {
            cout << "to high\n";
            cout << "try again: ";
        }
        
    }
    print_array(guesses, guess_count);
    
}

int main()
{ 
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit"<<std::endl <<"1. play game\n";
        
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "thanks for playing\n";
            return 0;

        case 1:
            play_game();
            break;
        
        default:
            break;
        }
    } while (choice != 0);
}
