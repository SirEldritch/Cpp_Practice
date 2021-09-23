//Always declare numbers...
#include <iostream>
#include <vector>
#include "Screen.h"

int main(){
    char a, b, c;

    Screen page(24,80,' '), *p = &page;
    a = p->get();

    page.move(3,4).set('#');
    b = p->get();

    page.set(5,3,'@');
    c = p->get();

    page.display(std::cout);
    std::cout<<std::endl;

    Window_mgr page_New;
    page_New.addScreen(page);
    //page_New.clear(0);
    std::cout<<a<<'\t'<<b<<'\t'<<c<<std::endl;
    return 0;
}