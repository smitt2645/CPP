#include <iostream>
#include <string>

using namespace std;

int main(){
    string favTea;
    int quantity;

    cout << "what would you like to have in tea ?: ";
    getline(cin,favTea);

    if(favTea.empty()){
        cout << "You didn't enter anything. sorry! , exit...\n";
        return 0 ;
    }
    
    cout << "howmany cups you want ?";
    cin >> quantity;
    
    if(!quantity){
        cout << "You didn't enter anything in quantity , sorry!,  exit...\n";
        return 0 ;
    }
    cout << "your " << favTea << "is ready" << "here is your " << quantity << " cups Thank you keep ordering! \n";
    return 0;

}