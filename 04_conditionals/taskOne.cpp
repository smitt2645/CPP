/*
    write a program that user want "Green Tea" ,
    if user write as same as in title so confirm order ! 
*/ 

#include <iostream>
#include <string>

using namespace std;
int main(){
    string teaName;
    cout << "Please confirm you order : ";
    getline(cin,teaName);
    if(teaName == "Green Tea"){
        cout << "Your order confirm !" << endl;
        return 0;
    }
    cout << "Your order cancelled !" << endl;
    return 0;
}