#include <iostream>
#include "New_Sales_Data.h"

int main(){
    if(std::cin) {
        Sales_data total(std::cin);
        while(std::cin){
            Sales_data hold(std::cin);
            if (total.isbn() == hold.isbn()){
                total.combine(hold);
            } else {
                print(std::cout,total) << std::endl;
                total = hold;
            }
        }
    //print(std::cout, total) << std::endl;
    } else {
        std::cerr << "No Data?!" << std::endl;
    }
}