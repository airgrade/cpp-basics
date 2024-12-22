//Designers network
//using logical operators

#include <iostream>
#include <string>

using namespace std;

int main(){

    string username;
    string password;
    bool success;

    cout << "\tGame Designer's Network\n";

    //using do while loop
    do{
        cout << "\nUsername: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username == "No.Support" && password == "lonewolf"){

            cout << "\nHey Ranger.";
            success = true;
        }
        else if (username == "BabyDog" && password == "citychiwawa"){

            cout << "\nHey Luje, what are you up to?";
            success = true;
        }
        else if (username == "Powerfulchi" && password == "strongOnly"){

            cout << "\nIt's good to see you, Ayami";
            success = true;

        }
        else if (username == "guest" || password == "guest"){

            cout << "\nWelcome, guest.";
            success = true;
        }
        else {

            cout << "\nYour Login failed.";
            success = false;
        }

    }while (!success);

    return 0;
}


