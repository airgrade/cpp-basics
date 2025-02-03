//program to read the standard input a line at a time
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string line;
    cout << "Enter line (Ctrl + D to stop): " << endl;

    //read input line by line
    while (std::getline(cin, line)){
        cout << "You entered: " << line << endl;
        cout << "Enter another line: "<< endl;
    }
    return 0;
}