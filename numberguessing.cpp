#include <iostream>
#include <cstdlib>  // for rand() and  srand()
#include <ctime>    // for time 
using namespace std ;
int main () {
    cout <<"Welcome to the Number Guessing Game"<<endl;
// Generating the Secret Number
    srand (time(0));
    int secretNumber = 1+ (rand() % 100);

    int guess;
    int attempts = 0;
    while (true) {
        cout << "Guess the Secret number between 1 and 100 "<<endl;
        cin >> guess;
        attempts++;
        if (guess == secretNumber)
        {
            cout <<" Congratulations! You have guessed the secret Number (" <<secretNumber<< ") in " <<attempts << " attempts."<<endl;
            break;

        }
        else if (guess < secretNumber)
        {
            cout<< " Try Higher Number " <<endl;

        }

        else
        {
            cout << "Try lower Number"<<endl;
        }
    }
    return 0;
}
