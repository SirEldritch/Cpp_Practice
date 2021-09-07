#include <iostream>
#include "Sales_Data.h"
using namespace std;

int main(){
    Sales_data total;
    double price = 0;
    if (read(cin,total)){
        Sales_data hold;
        while(read(cin,hold)){
            if (total.isbn() == hold.isbn()){
                total = add(total,hold);
            }
            else {
                print(cout,total);
                cout<<endl;
                total.bookNo = hold.bookNo;
                total.revenue = hold.revenue;
                total.units_sold = hold.units_sold;
            }
        }
        print(cout,total);
        cout<<endl;
    }
    else {
        cerr<<"No Data"<<endl;
    }
    return 0;
}
