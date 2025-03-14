#include <iostream>

using namespace std;

void func();

int main(){
    int var = 5; //local variable in main function.
    cout << "I main() var is: " << var << "\n\n";

    func();

    cout << "Back in main() var is: " << var << "\n\n";
    {
        cout << "In main() in a new scope var is: " << var <<"\n\n";

        cout << "Creating new var in scope. \n";
        int var = 10; //Varible in new scope, hides other variable named var

        cout << "In main() in a new scope var is: " << var << "\n\n";
    }
    
    cout << "At end of main() var created in new scope no longer exists. \n";
    cout << "At the end of main() var is: " << var << "\n";

    return 0;
    
}

void func()
{
    int var = 5; // local variable inside function
    cout << "Inside func() var is: " << var << "\n\n";
}