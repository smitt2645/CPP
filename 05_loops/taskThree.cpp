/*

*/ 

#include <iostream>
#include <string>

using namespace std;

int main(){

    // 1) iteration variable compalsary 
    // 2) condition with iteration variable compalsary 
    // 3) loop controller for check with the middle condition: howmany time we want loop ( it will incre/decre the iteration variable's value !) 
    
    int i = 1000;
    cout << "first global scope value of i : " << i << endl;
    for(i=0;i<=20;i++){
        cout << ++i;
        // increment first then print
        // initial (0)/ print (1)
        // 01
        // 23
        // 45
        
        // cout << i++;
        // print first then increment
        // initial(0) / print (0)
        // 00
        // 12
        // 34
        cout << "funtional scope value of i : " << i << endl;
    }
    // decrease 1 from the final value!     
    cout << "last scope value of i : " << --i << endl;
    return 0;
}