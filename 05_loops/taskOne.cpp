/*
    write a program that decrease the number of cup is to be serve based on user input 
    and also track the serving order.
    
    eg. :
    user input : 5
    output : 5,4,3,2,1
*/ 

#include <iostream>
#include <string>

using namespace std;

int main(){
    int numberOfOrders;

    cout << "Enter number of tea ";
    cin >> numberOfOrders;
    
    while (numberOfOrders > 0)
    {
        // prefix :
        // it will first decrese the orignal value provided by user input then will take in use or print 
        cout << "Serving tea : " << --numberOfOrders << endl;
        // 45
        // 34
        // 23
        // 12
        // 01
        
        //  postfix :
        // it will first use or print the the orignal value provided by user input then will decrease the orignal value 
        // cout << "Serving tea : " << numberOfOrders-- << endl;
        // 54
        // 43
        // 32
        // 21
        // 10
    }
    // it will be serve after while condition get false    
    cout << "All cups has been served : ";
    return 0;
}