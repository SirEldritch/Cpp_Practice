/*
constexpr is to validate that an obj is a const, by declaring
a variable with it.
*/
#include <iostream>
int main(){
    const int *p = nullptr;
    // Pointer to a Constant Int
    constexpr int *q = nullptr;
    // Const Pointer to Int;
    int j =  5;
    constexpr int i = 42;
    //constexpr const int *p1 = &i;
    // p1 is a constant pointer to the const int i
    //constexpr int *p2 = &j;
    // p2 is a constant pointer to the int j
    int null = 0, *p3 = &null;
    // the & was missing so it was illegal
    return 0;
}