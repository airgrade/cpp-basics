//Guess my number classic game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0))); //seed random number generator

    int secretNumber =rand() % 100 + 1 ; // random number between 1 and 100
    int tries = 0;
    int guess;

    cout << "\tWelcome to Guess My Number \n\n";
}
