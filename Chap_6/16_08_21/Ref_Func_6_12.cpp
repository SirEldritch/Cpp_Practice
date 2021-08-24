/*
Swapping but with references.
*/

#include <iostream>

void swip(int &fr, int &sr){
    int bf;
    bf = fr;
    fr = sr;
    sr = bf;
}

int main(){
    int fval, sval;
    std::cout<<"Please enter two integers: "<<std::endl;
    while(std::cin>>fval>>sval){
        swip(fval,sval);
        std::cout<<fval<<' '<<sval<<std::endl;        
    }
    return 0;
}