#include <iostream>
#include "Sales_Data.h"
using namespace std;


int main(){
    Sales_data total;
    double price = 0;
    if (cin>>total.bookNo>>total.units_sold>>price){
        total.revenue = price * total.units_sold;
        Sales_data hold;
        while(cin>>hold.bookNo>>hold.units_sold>>price){
            hold.revenue = price * hold.units_sold;
            if (total.isbn() == hold.isbn()){
                total.combine(hold); 
            }
            else {
                cout<<total.bookNo<<'\t'<<total.units_sold<<'\t'<<
                total.revenue<<'\t'<<total.avg_price()<<endl;
                total.bookNo = hold.bookNo;
                total.revenue = hold.revenue;
                total.units_sold = hold.units_sold;
            }
        }
        cout<<total.bookNo<<'\t'<<total.units_sold<<'\t'<<
        total.revenue<<'\t'<<total.avg_price()<<endl;
    }
    else {
        cerr<<"No Data"<<endl;
    }
    return 0;
}
