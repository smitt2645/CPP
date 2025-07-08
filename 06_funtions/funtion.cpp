
#include <iostream>
#include <string>

using namespace std;

// funtion declaration
// void fillChai(int cups);

// funtion defination
// here we are passing same memory reference not copy value it will be ovveride to it's orignal value! (with parameter =>&cups)
void fillChai(int &cups){
    cups += 5;
    cout << "total filled cups are :" << cups << endl;
}

int main(){
    int total_cups = 5;
    // here we are passing the copy of the total_cups not orignal memory location so 
    // we can manipulate the copy of the variable's value not actally value of the variable what has been passed as reference
    fillChai(total_cups);
    cout << "total available cups :" << total_cups << endl;
    return 0;
}