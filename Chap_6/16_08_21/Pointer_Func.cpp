/*
We swapped values using pointers. We had to have a buffer
to hold a temporary value.
*/

#include <iostream>
//  creates pointers to variables
void pointer_function(int *fp, int *sp){
    int buffer;
    buffer = *fp;
    *fp = *sp;
    *sp = buffer;
    //return *fp,*sp;
    // We only use this if the function will return an answer
    // storage = function(x) (function returns a value)
}

int main(){
    int fval, sval;
    std::cout<<"Please enter two numbers: "<<std::endl;
    while(std::cin>>fval>>sval){
        // Calls the function and uses those variables,
        // Remember *p = &r therefore we have as below
        pointer_function(&fval,&sval);
        std::cout<<fval<<' '<<sval<<std::endl;
    }
    return 0;
}