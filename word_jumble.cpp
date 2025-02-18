// Word Jumble game;
//Setting up the program

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace  std;


int main()
{
    //Picking a word to jumble
    enum fields {WORD, HINT, NUM_FIELD};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
        {"wall","Do you feel you're banging your head against something?"},
        {"glasses","This might help you see the answer."},
        {"labored","Going slowly, is it?"},
        {"persistent","Keep at it."},
        {"jumble","It is what the game is all about."}
    };

    //pick a random word from my choices
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand()%NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    //Jumbling the word
    string jumble = theWord; //the jumbled version of the word
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }
    
}
