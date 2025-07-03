#include <iostream>
// if any starting from # called as pre processor directives

//  way to use namespace
// 1) using namespace std;
// 2) using std::cout;
// 3) std::cout -> direct inside method;

using std::cout;
using std::endl;
using std::cin;
// here we have a main() called as method and function also !
int main(){
    std::cout << "Smit Trivedi" << std::endl;
    int val_1 = 1;
    int val_2 = 1;
    int user_input;

    cout << "val_1 * val_2 : " << val_1 * val_2 << endl ;
    cout << "Enter a number : " ;
    cin >> user_input;

    if(user_input > 10){
        cout << "great !";
    }else{
        cout << "please provide valid user input !";
    }

    return 0;
}