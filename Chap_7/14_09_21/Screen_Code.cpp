//Always declare numbers...
#include <iostream>
#include "Screen.h"

int main(){
    Screen page(24,80,' ');
    page.move(3,4).set('#');
    page.set(5,9,'@');
    page.display(std::cout);
    std::cout<<std::endl;
    return 0;
}