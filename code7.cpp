// Game Stats 2.0

#include <iostream>
using namespace std;

int main(){
    unsigned int score = 5000;
    cout<<"score: " <<score<<endl;

    //altering the value of a variable
    score = score + 100;
    cout<<"score: " << score << endl;

    //combined assingment operator
    score += 100;
    cout << "score: " << score<< endl;

    //increment operators
    int lives = 3;
    ++lives;
    cout << "Lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives<< ","<<bonus<<endl;

    lives = 3;
    bonus= lives++ *10;
    cout << "lives, bonus = " << lives << "," << bonus << endl;


    // integer wrap around
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    return 0;
}
