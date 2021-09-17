#include <iostream>
#include "Person_Header.h"

int main(){
    Person example_One(std::cin);
    print(std::cout,example_One) << std::endl;
    return 0;
}
