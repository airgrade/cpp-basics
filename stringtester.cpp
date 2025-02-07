//String Tester program (How to use string objects)

#include <iostream>
#include <string>

using namespace std;

int main(){

    string word1 = "Game";
    string word2 ("Over");
    string word3 (3,"!");

    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";
}