// My inventory for weapons
#include <iostream>
#include <string>
 
using std::cout;
using std::endl;
using std::string;

int main(){
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];


    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    cout << "\nYour Items:\n";
    for (int i = 0; i < numItems; ++i){
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.\n";
    cout << "The first item on the list is: "<< inventory[0] << endl;

}