/*
XisGonna
WhileExIns
ForExInsT
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string User_Int;
    cin >> User_Int;
    for (decltype(User_Int.size()) index = 0; 
    index != User_Int.size(); ++index){
        User_Int[index] = 'X';
    }
    cout<<User_Int<<endl;
    return 0;
}