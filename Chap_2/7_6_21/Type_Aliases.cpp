#include <iostream>
typedef double wages;
// wages is another name for double
typedef wages base, *p;
// base is another name for wages(double), *p is another
// name for double pointer (double *)
int main(){
    wages i = 64.56;
    // double i = 64.56;
    base j = 8.77; 
    // double j = 8.77;
    p pi = &i;
    // double *pi = &i;
    std::cout<<*pi<<'\t'<<pi<<'\t'<<j<<std::endl; 
    return 0;
}