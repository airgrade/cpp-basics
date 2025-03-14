//program demonstrating global variables

#include <iostream>

using namespace std;

int glob = 10; //global variable

void access_global();
void hide_global(); 
void change_global();

int main(){

    cout << "In main() glob is: " << glob << "\n\n";
    access_global();

    hide_global();
    cout << "In main() glob is: " << glob << "\n\n";

    change_global();
    cout << "In main() glob is: " << glob << "\n\n";
    return 0;
}

void access_global()
{
    cout << "In access global function the glob var is:" << glob << "\n\n";
}

void hide_global()
{
    int glob = 0; //hide the global variable glob
    cout << "In hide glob() the glob is: " << glob << "\n\n";
}

void change_global()
{
    glob = -10; //change global variable glob
    cout << "In change glob() the is: " << glob << "\n\n";
}

