/*
    write a program that ask to user for serving the tea everytime after a serve till user reject !    
    and also track the serving order.
*/ 

#include <iostream>
#include <string>
#include <limits>  

using namespace std;

int main(){
    
    bool user_input,first_serve = true;

    do{
        if(first_serve){
            cout << "do you want tea Press (0) for (YES) and Any other key for (NO)  ? " << endl;
        }else{
            cout << "do you want more tea ? " << endl;
        }
        first_serve = false;
        cin >> user_input;
        
        if (cin.fail()) {  
            cout << "\nInvalid input because of invalid dtype found we only consider boolean and should be truthy value ! Exiting program." << endl;  
            cout << "\n Exiting program." << endl;  
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            return 1;  
        }  


        if(user_input == 0 && !user_input){
            cout << "Here is your order of tea!";
        }else{
            cout << "exit...";
        }
        cout << endl;
    }while (user_input == 0);

    return 0;
}