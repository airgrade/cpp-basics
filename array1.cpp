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
    // change the first item to battle axe after the trade

    inventory[0] = "battle axe";
    cout << "\nThe items available in the inventory\n";
    int numbering = 0;
    for (int i = 0; i < numItems; ++i){
        ++numbering;
        cout << numbering<< ". " << inventory[i]<< endl;
    }
    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYou have found a healing portion.\n";
    if (numItems < MAX_ITEMS) {

    }

    return 0;
}
