#include <iostream>
int main(){
    int ival = 1024;
    int *pi = &ival;
    //  The usual pointer
    int **ppi = &pi;
    // The double pointer? The ** is very important
    std::cout<<"The value of ival\n"
    <<"direct value: " << ival << "\n"
    <<"indirect value: " << *pi << "\n"
    <<"double indirectness value: " << **ppi 
    <<std::endl;
}