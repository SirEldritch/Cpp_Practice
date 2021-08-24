/*
Useful fact: Instead of Inputting all values, you can simply have a seperate file that you can input instead.
Example:
$./Classes_Count < book_sales
Example:
$'./Execute_file' 'input' 'inputted file'

Also, this is very similar to the while and if loops made before. Check prevoius folder dates to compare the answers,
it should be the same.
*/
#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item total;
    int count;
    //Get the First Value to see if there is any data
    if(std::cin>>total){
        Sales_item trans;
        count = 1;
        //Compare the Current Value (total) to the Next Value (trans)
        while(std::cin>>trans){
            //If statement is true, add the Next Value to the Current Value
            if(total.isbn()==trans.isbn()){
                total += trans;
                ++count;
            }
            //If not, print the Current Value (total) then set that to the New Next Value (trans)
            else{
                std::cout<<total<<std::endl;
                std::cout<< total.isbn() << " has had " << count << " seperate transaction/s" << std::endl;
                total = trans;
                count = 1;
            }
        }
        std::cout<<total<<std::endl;
        std::cout<< total.isbn() << " has had " << count << " seperate transactions" << std::endl;
    }
    else{
        std::cerr<<"No Data!"<<std::endl;
        return -1;
    }
    return 0;
}