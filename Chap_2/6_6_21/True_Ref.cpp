/*
This is how you would reference a pointer using:
*&(Name of Reference of Pointer) = (Pointer)

This would be useful if you need to use an alternative
name for a pointer later on. Right now, I don't understand
at all for the use of this but it will be helpful to learn now
than later.
*/
#include <iostream>
int main(){
    int ival = 100, *pi = &ival;
    int *&pref = pi;
    std::cout<<"This is a reference of a pointer: " << *pref
    << std::endl;
    return 0;
}