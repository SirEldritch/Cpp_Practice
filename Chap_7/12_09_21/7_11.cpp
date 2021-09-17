#include <iostream>
#include "New_Sales_Data.h"
using namespace std;

int main(){
    // IN
    Sales_data total1;
    Sales_data total2("XX-XX-XX-XX");
    Sales_data total3("YY-YY-YY-YY",5,12);
    Sales_data total4(cin);
    // OUT
    print(cout,total1) << endl;;
    print(cout,total2) << endl;
    print(cout,total3) << endl;
    print(cout,total4) << endl;
    return 0;
}        