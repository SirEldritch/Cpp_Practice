#include <iostream>
#include "Person_Data.h"

int main(){
    Person_Data example_One;
    read(std::cin,example_One);
    print(std::cout,example_One);
    std::cout<<std::endl;
    example_One.Name();
    example_One.Address();
    return 0;
}