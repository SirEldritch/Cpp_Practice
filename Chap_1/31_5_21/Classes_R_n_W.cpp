/*
The Sales_item class is defined in the Sales_item header. When a type is defined with that class, all operations associated with it
will also come to play!
The code below shows us once we input an ISBN number with number of books sold at what price, it will
print the total revenue generated as well as the average price of the books that was sold.
*/
#include <iostream>
#include "Sales_item.h"
int main(){
    //The Sales_item class defines a type named Sales_item. We can define a variable from that class type as below:
    Sales_item book;

    std::cin>>book;
    std::cout<<book<<std::endl;
    return  0;
}
/*
Example:
Input:
0-201-70353-X 4 24.99
Output:
0-201-70353-X 4 99.96 24.99
*/

/*
Input:
ISBN - Number of Books sold - Price
Output:
ISBN - Numbers of Books sold - Total Revenue - Average Price
*/