// Hangman
// The classic game

#include <iostream>
#include <string>
#include <vector>
#include <random> //For std::default_random_engine
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main(){
    //setup
    const int MAX_WRONG = 8; //maximum number of incorrect guesses allowed

    vector<string> words; //will contain collection of possible word to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    //srand(static_cast<unsigned int>(time(0)));
    //use std::shuffle with a random number generator
    default_random_engine rng(static_cast<unsigned int>(time(0)));
    shuffle(words.begin(), words.end(), rng);
    const string THE_WORD = words[0]; //word to guess is at index 0
    int wrong = 0; //the number of incorrect guesses
    string soFar(THE_WORD.size(), '-'); // words guessed so far
    string used = "";

    cout << "Welcome to Hangman. Good luck!\n";

    //Main Loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD)){
        cout<< "\n\nYou have "<< (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters: \n"<< used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;

        //get the players guesses
        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); // make uppercase since secret word is in uppercase

        while (used.find(guess) != string::npos){
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos){
            cout << "That's right! " << guess << " is the word.\n";

            //update soFar to include newly guessed letter
            for (int i = 0; i < THE_WORD.length(); ++i){
                if (THE_WORD[i] == guess){
                    soFar[i] = guess;
                }
            }
        }
        else {
            cout << "Sorry, " << guess << "isn't in the word.\n";
            ++wrong;
        }
    }

    //shutdown
    if (wrong == MAX_WRONG){
        cout << "\nYou have been hanged!";
    }
    else {
        cout << "\nYou've guessed it!";
    }

    cout << "\nThe word was "<< THE_WORD << endl;

    return 0;
}
