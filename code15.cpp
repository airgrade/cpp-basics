//Play again program using do loops

#include <iostream>
using namespace std;

int main(){

    char again;
    
    do{
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again?(y/n):\n ";
        cin >> again;
    } while(again == 'y');

    cout << "\nOkay, bye.";

    return 0;


}
