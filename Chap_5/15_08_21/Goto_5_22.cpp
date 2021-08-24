#include <iostream>

int main(){
    int pvar = -10;
    while (pvar <= 0){
        ++pvar;
        std::cout<<pvar<<std::endl;
    }
    std::cout<<"We escaped!"<<std::endl;
    return 0;
}