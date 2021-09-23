#include <iostream>
#include "New_Sales_Data.h"

int main(){
    std::cout<<"Creating obj_One"<<std::endl;    
    Sales_data obj_One("XXXXX",4,5);
    std::cout<<"End Constructor"<<std::endl;
    
    std::cout<<"Creating obj_TWo"<<std::endl;    
    Sales_data obj_Two;
    std::cout<<"End Constructor"<<std::endl;
    
    std::cout<<"Creating obj_Three"<<std::endl;    
    Sales_data obj_Three("XXXXX");
    std::cout<<"End Constructor"<<std::endl;
    
    std::cout<<"Creating obj_Four"<<std::endl;    
    Sales_data obj_Four(std::cin);
    std::cout<<"End Constructor"<<std::endl;
    return 0;
}
