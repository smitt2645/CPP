/*
    write a program that return a badge
    if tea bags buy in between 10 and 20 so give "silver" badge
    if 20 plus so give "golden" badge
*/  

#include <iostream>
#include <string>

int main(){
    double teaBags;
    std::string silver = "Silver" ;  
    std::string golden = "Golden" ;  
    std::cout << "Enter a certain number of tea bags : ";
    std::cin >> teaBags;
    if(!teaBags){
        std::cout << "we did not get any cetain number ! , sorry exit..";
    }
    if(teaBags >= 10 && teaBags <= 20){
        std::cout << "you got " << silver;
        return 0;
        
    }else if(teaBags >= 20){
        std::cout << "you got " << golden;
        return 0;       
    }else{
        return 0;
    }
    return 0;
}