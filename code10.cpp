//score rater
//working on if statements

#include<iostream>
using namespace std;

int main(){
    
    if (true){

        cout << "This is always displayed. \n\n";
    }
    if (false){

        cout<< "This is never displayed. \n\n";
    }

    int score = 1000; 
    if (score){

        cout << "At least you didn't score zero.\n\n";
    }
    if (score>=250){

        cout << "you scored more than 250 or more. Decent.\n\n";
    }
    if (score>=500){

        cout << "you scored 500 or more. Nice.\n\n";

        if(score>=1000){

            cout << "You scored 1000 or more. Impressive!\n";
        }

    }


    return 0;
}
