#include <iostream>
#include <string>

int main(){
    std::string str ("some string");
    // print the characters of str one character on a line
    for (auto c : str) //for every character in str
        std::cout << c << std::endl; //print the current character followed by a newline
    
    return 0;
}