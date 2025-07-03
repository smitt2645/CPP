#include <iostream>
#include <string>

using namespace std;


int main(){
    // escape sequences : ref : microsoft official doc !
    string animal = "dog \n";
    string description = "known as \"fav\" animal !"; 
    cout << "fav animal name is  : " << animal ; 
    cout << "it's description  : " << description ; 
    return 0;
}