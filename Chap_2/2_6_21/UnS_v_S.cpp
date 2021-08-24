/*
If you ever get denied, set the builder as bin/g++ and nothing else
this is for your own sanity.

Unsigned means the variable must be a positive, everything is assumed
to be signed unless specified.

Example:
Signed
-10 - 10
Unsigned
0-20
*/
#include <iostream>
int main(){
    unsigned int u = 10;
    int i = -42;
    i = i;
    std::cout<<i+i<<std::endl; //Gave -84
    std::cout<<i+u<<std::endl; //Gave 4294967264
    return 0;
}
