/*
This checks if the ISBN are the same. If they are not, it will output an error out saying "hey you done goofed". The if statement
with item1.isbn() will call '()' the member function 'isbn' of the type 'item'. A member function is a function defined as a part of 
a class. The '.' operator tells us the member function is somewhere with the object type in the Sales_item class.
*/
#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if(item1.isbn()==item2.isbn()){
        std::cout<<item1+item2<<std::endl;
        return 0;
    }
    else{
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
}