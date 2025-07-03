#include <iostream>

// 1) write a program that if total price is gt then 100 so give 5% discount in totalPrice.

int main(){

    double discountedPrice ,totalPrice,finalPrice;
    
    std::cout << "Enter you total price";
    std::cin >> totalPrice;
    if(!totalPrice){
        std::cout << "din't get any price from your side ! exit..";
        return 0;
    }

    if(totalPrice > 100){
        discountedPrice = totalPrice * 0.05;
        finalPrice = totalPrice - discountedPrice;
        std::cout << "you final price is " << totalPrice << " with \"5%\" discount you will get in " << finalPrice ;         
        
        return 0;
    }
    std::cout << "you final price is " << totalPrice;

    return 0;
}