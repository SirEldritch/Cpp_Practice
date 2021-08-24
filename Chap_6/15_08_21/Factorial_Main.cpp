/*
To compile things seperately, we would need to enter commands 
into bash. We would say:
g++ -c Factorial_Func.cpp
g++ -c Factorial_Main.cpp
g++ Factorial_Main.o Factorial_Func.o
g++ Factorial_Main.o Factorial_Func.o -o main which then would
make a g++ file
*/

#include "Chapter6.h"
#include <iostream>

int main(){
    fact();
    return 0;
}