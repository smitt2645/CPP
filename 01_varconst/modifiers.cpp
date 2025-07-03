#include <iostream>

int main(){

    // just check signed or unsigned !
     int user_input;
    std::cout << "user input : " ;
    std::cin >> user_input;
    std::cout << "signed :";
    if(user_input >= 0){
        std::cout << "true" ;
    }else{
        std::cout << "false : " ;
    }
    return 0;
}