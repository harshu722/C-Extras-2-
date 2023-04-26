#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random_num, guess, tries = 0;
    srand(time(0));  // seed random number generator with current time
    random_num = rand() % 100 + 1;  // generate a random number between 1 and 100
    cout << "Welcome to the guessing game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    do {
        cout << "Guess the number: ";
        cin >> guess;
        tries++;
        if (guess > random_num) {
            cout << "Too high! Guess again.\n";
        } else if (guess < random_num) {
            cout << "Too low! Guess again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
        }
    } while (guess != random_num);
    return 0;
}

