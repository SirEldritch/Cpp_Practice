#include "Chapter6.h"
#include <iostream>

int fact(){
    int ret = 1, val;
    std::cout<<"Please enter a number: "<<std::endl;
    std::cin>>val;
    std::cout<<ret<<std::endl;
    
    while (val > 1){
        ret*=val--;
        std::cout<<ret<<std::endl;
    }
    return ret;
}
