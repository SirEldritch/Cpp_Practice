/*
Decltype will make a declaration the same as the declaration of
another variable stated.
Example: 
int h = 5;
decltype(h) l = 7; // same as int l = 7 
To use what r is refering to, we must use an expression such
as r + 0 to create an uninitialized variable.
*/
#include <iostream>
int main(){
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    //decltype(cj) = z;
    // Statement is illegal, z must be defined to another
    // variable or literal (number) as it is a *const* int 
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;
    // b is an uninitialized int, b yields an int
    // uninitialized gives 32750 which is oddly close
    // to short max
    //decltype(*p) c;
    // c must be initialized so this is a no go
    std::cout<<b<<std::endl;
    //decltype((i)) d;
    // This assumes that i is an expression, therefore d has
    // to be initialized. r is a reference, it does not suffer
    // from the same issue
    decltype(i) e;
    // e is an int which is not initialized
    return 0;
}