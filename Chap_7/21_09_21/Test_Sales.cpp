#include <iostream>
#include "Old_Sales_Header.h"

int main(){
    Old_Sales_Data obj = {"Stuff", 25 , 16.99};
    std::cout<<obj.s<<'\t'<<obj.units_sold<<'\t'<<obj.revenue<<std::endl;
}