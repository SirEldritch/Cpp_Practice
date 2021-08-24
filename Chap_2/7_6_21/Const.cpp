/*
You can modify stuff objects that copy values from constant
objects. You may use extern as well to have a constant object
be used in multiple files.
*/
#include <iostream>
int main(){
    const int bufSize = 512;
    // bufSize = 512;
    //  Not Feasible, const cannot be changed no matter what
    // const int k;
    //  const has to be initialized with a number of sorts
    int i = 42;
    const int ci = i;
    // i copied into ci
    int j = ci;
    // ci copied into j, j can be modified
    return 0;
}