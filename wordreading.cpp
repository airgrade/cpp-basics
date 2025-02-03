//program to read word at time
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string word;
    cout << "Enter a word below: (Ctrl + D to quit)" << endl;

    //read word by word
    while (std::getline(cin, word)){
        cout << "You have entered: " << word << endl;
        cout << "Enter another word:" << endl;
    }
    return 0;
}