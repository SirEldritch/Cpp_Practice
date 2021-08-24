#include <iostream>
int main(){
    bool b = 42;
    int i = b;
    int i2 = 3.14;
    double pi = i2;
    unsigned char c = -1;       //Can be a letter such as c
    signed char c2 = 256;       //If you can, set the numbers between 0 t0 127 
    std::cout<<b<<std::endl;    // b = 1
    std::cout<<i<<std::endl;    // i = 1
    std::cout<<i2<<std::endl;   // i2 = 3
    std::cout<<pi<<std::endl;   // pi = 3.0
    std::cout<<c<<std::endl;    // c = undefined/255 - 8 Bits
    std::cout<<c2<<std::endl;   // c2 = undefined/Overflowed    - 8 bits
    return 0;
}