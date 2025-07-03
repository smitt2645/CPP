/*
write a program that provide 15% discount on tea bags,  
if student or has bought more than 15 tea bags
*/

#include <iostream>
#include <string>

int main(){
    double teaBags,bagPrice = 20,totalPrice,discount,finalPrice;
    bool isStudent;
    
    std::string user;
    std::cout << "Are you student (1 for Yes and 0 for No).";
    std::cin >> isStudent;
    std::cout << "howmany tea bags you have purchased ? :";
    std::cin >> teaBags; 
    totalPrice = teaBags * bagPrice;
    if(isStudent || teaBags >= 15){
        discount = totalPrice * 0.15;
        finalPrice = totalPrice - discount; 
        std::cout << "You got \"15%\" discount and your final amount is : " << finalPrice;
        return 0;
    }
    
    std::cout << "Your final amount is : " << totalPrice ;
    
    return 0;
}