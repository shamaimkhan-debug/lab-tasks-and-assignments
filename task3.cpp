
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int random_number = 1 + (rand() % 100);
    int guessed_number;
    cout << "Guess the number Game" << endl;
    while (true) {
        cout << "Your guess: ";
        cin >> guessed_number;
        if (random_number == guessed_number) {
            cout << "You correctly guessed the number!\n";
            break;
        }
        else if (guessed_number > random_number){
            cout << "Your guess is too high\n";
        }
        else {
            cout << "Your guess is too low\n";
        }
    }
    return 0;
}