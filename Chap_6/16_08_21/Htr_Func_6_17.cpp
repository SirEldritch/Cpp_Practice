/*
The order of how the function should go is very important. You
can either do below or do void func(); To let the code know that
we do have the function else where, we just did not want to put
it in the beginning. 
*/


#include <iostream>
#include <string>

void lowercase(std::string &s){
    for (auto &o: s){
        o = tolower(o);
    }
}

void is_capital(std::string &s){
    for (auto &o: s){
        if (isupper(o)){
            lowercase(s);
            break;
        }
    }
}

int main(){
    std::string user_Int;
    std::cout<<"Please Enter a String: "<<std::endl;
    std::cin>>user_Int;
    is_capital(user_Int);
    std::cout<<user_Int<<std::endl;
    return 0;
}