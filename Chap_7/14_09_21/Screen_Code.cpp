//Always declare numbers...
#include <iostream>
#include <vector>
#include "Screen.h"

int main(){
    Screen page(24,80,' ');
    page.move(3,4).set('#');
    page.set(5,9,'@');
    page.display(std::cout);
    std::cout<<std::endl;
    Window_mgr page_New;
    //page_New.screens[0].display(std::cout);
    //std::cout<<std::endl;
    page_New.clear(0);
    return 0;
}