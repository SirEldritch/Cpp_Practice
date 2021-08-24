/*
We must first include our SALES_DATA_HEADER since that includes
the Sales_Data class we want to use. The Sales_Data class includes
members of different data types. We defined data1 and data2, they
must follow the data types in the class in that specific order for
the input for this code using ./Sales_Data_Ex < Data. To get the
members within the class, we must define them as what they are
called in the class.
Example:
data1.bookNo
Vscode should always give a prompt on what members are present
for data1. From there, we can create normal code that we want :D
*/
#include "SALES_DATA_HEADER.h"
#include <iostream>

int main(){
    Sales_data data1, data2;
    double price = 0;

    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = price * data2.units_sold;

    if (data1.bookNo==data2.bookNo){
        unsigned TotalCnt = data1.units_sold + data2.units_sold;
        double GeneratedRev = data1.revenue+data2.revenue;
        std::cout<<data1.bookNo<<'\t'<<TotalCnt<<'\t'<<
        GeneratedRev<<std::endl;
        if(TotalCnt != 0)
            std::cout<<GeneratedRev/TotalCnt<<std::endl;
        else
            std::cout<<"No Books Sales"<<std::endl;
        return 0;
    } else {
        std::cout<<"ISBN has to correlate to the same book" <<
        std::endl;
        return -1;
    }
}
