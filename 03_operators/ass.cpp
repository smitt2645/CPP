#include <iostream>

// 1) write a program that if total tea bags is gt then 10 so give 5 extra tea bags in total tea bags.
int main(){
    double teaBags;
    std::cout << "Enter a certain amount of tea bags you want : ";
    std::cin >> teaBags;
    
    if(!teaBags){
        std::cout << "you have not provided any number , sorry exit.. ";
        return 0;
    }
    
    if(teaBags >= 10){
        teaBags += 5;
        std::cout << "you will get 5 extra tea bags on buy upto 10 tea bags !" << "here is your total ordered bags : " << teaBags;
        
        return 0 ;
    }
    std::cout << "your total orderd tea bags: " << teaBags;

    return 0;
}