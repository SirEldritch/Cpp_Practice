/*
The same story with int != double or other initializers. You
cannot point to something if the pointer is not intialized the 
same way.
*/
#include <iostream>
int main(){
    int ival = 50;
    int *p = &ival;
    std::cout<<*p<<'\t'<<ival<<std::endl;
    // p points to the memory address and asks for the value
    std::cout<<p<<'\t'<<&ival<<std::endl;
    // p points to the memory address of ival, p and &ival should be the same
    std::cout<<&p<<'\t'<<&ival<<std::endl;
    // p is shown to have it's own memory address allocated and differs from ival
    *p = 0;
    std::cout<<*p<<'\t'<<ival<<std::endl;
    // pointer assigned ival as 0
    p = nullptr;
    ival = 100;
    std::cout<<p<<'\t'<<ival<<std::endl;
    // pointer is now assigned to 0/nullptr and ival is 100
    /*
    int *p1 = nullptr;
    ival = 10;
    std::cout<<*p1<<'\t'<<ival<<std::endl;
        It should assign p1 as zero but it doesn't
        *Amendment*
        It does assign the nullptr for p1 but we cannot see it.
        We cannot represent a pointer is pointing to null unless
        it is zero when we initialize it.
    */
    return 0;
}