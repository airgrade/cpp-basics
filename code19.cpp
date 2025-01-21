// My own code on vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector <string> gunMarket;

	// Using the push back member function to add objects to the vector
	gunMarket.push_back("hand gun");
	gunMarket.push_back("Rocket Launcher");
	gunMarket.push_back("M14");
	gunMarket.push_back("Grenade");

	cout << "Items available in the Gun Market currently are only" << gunMarket.size() << "\n";
	//To list all the items in the gunMarket
	
	cout << "Here is a List of currently available items:\n";
	for (unsigned int i = 0; i < gunMarket.size(); ++i){
		cout << gunMarket[i] << endl;
	}

	// Using the pop_back() member function to remove the last element in vector
	cout << "I will throwin a free grenade for you";
	gunMarket.pop_back();
	cout << "\nItems that are now avaible:\n"; 
	for (unsigned int i = 0; i < gunMarket.size(); ++i){
		cout << gunMarket[i] << endl;
	}
	cout << "\nGreat I will pack everything for you, It was a pleasure doing bussiness with you";
	gunMarket.clear();// The inventory returns to 0 and becomes empty
	
	if (gunMarket.empty()){
		cout << "\nOut of Stock.\n";
	}	
	else{
		cout << "\nOn sale come quicky\n";
	}

	return 0;
}
