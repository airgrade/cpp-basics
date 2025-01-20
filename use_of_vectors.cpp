//Hero's inventory 2.0
//Demonstrates vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout<< "You have " << inventory.size()<< "items.\n";

    cout<< "\nYour items:\n";
    for (unsigned int i =0; i < inventory.size();++i){
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size();++i){
        cout << inventory[i] << endl;
    }

    cout << "\nYou were robbed of all of your possessions by a thief.";
    inventory.clear();
    if (inventory.empty()){
        cout << "\nYou have nothing.\n";
    }
    else{
        cout << "\nYou have at least one item.\n";
    }

    return 0;
}