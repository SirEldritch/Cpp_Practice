#include <iostream>

int main(){
    int ival = 1024;
    int* pi = &ival, i = ival, &r = i;
    // The pointer only points to the first int unless 
    // specified to others with * notation.
    // pi is a pointer, i is a integer, r is a reference
    std::cout<<"ival and some pointers or references: \n"<<
    "ival value: \t\t\t" << ival << "\n" <<
    "pi pointer value: \t\t" << *pi << "\n" <<
    "i integer value: \t\t" << i << "\n" <<
    "r reference value: \t\t" << r << "\n" <<
    "proof that r is a reference: " << "\n" <<
    "r times 2, i = \t\t\t" << r*2
    <<std::endl;
    return 0;
}

/*
int i, *pi = 0
i is an integer, pi is a pointer to nothing/null
*/

/*
int* p1, p2
p1 is a pointer to nothing/null, p2 is an integer
*/
