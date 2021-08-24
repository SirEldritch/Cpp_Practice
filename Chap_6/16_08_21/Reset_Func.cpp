/*
Simple Demo of resetting a variable by passing a reference within
a function.
*/

#include <iostream>

// Remember int &ref for reference call
void reset(int &cval){
    cval = 0;
}

int main(){
    int ival = 90;
    reset(ival);
    std::cout<<ival<<std::endl;
    return 0;
}