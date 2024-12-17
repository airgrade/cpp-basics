// program that calculates the average scores of player

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    // varibles
    int firstScore, secondScore, thirdScore;

    //user response
    cout << "Enter your first  gaming score: ";
    cin >> firstScore;

    cout << "Enter your second gaming score: ";
    cin >> secondScore;

    cout << "Enter your third gaming score: ";
    cin >> thirdScore;

    // avg score calculation
    int avgScore = (firstScore + secondScore + thirdScore) / 3;

    cout << "Your average score is: " << avgScore <<endl;

    return 0;
}

