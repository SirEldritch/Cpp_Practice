/*
A Reference is an alias. A number is assigned to a
memory address when we initialize them to a variable
name. By referencing it, we can add another name to that
memory address which hold our value we seek for. 

Futhermore we can alter the value within it by normal
operations.
*/
#include <iostream>
int main(){
    int ival = 34;
    int &Ref_ival = ival;
    Ref_ival = Ref_ival*2;
    //int &Ref_ival_2;
    //      Got to reference to something first >:
    std::cout<<ival<<std::endl;
    std::cout<<&ival<<std::endl;
    std::cout<<Ref_ival<<std::endl;
    std::cout<<&Ref_ival<<std::endl;
    return 0;
}