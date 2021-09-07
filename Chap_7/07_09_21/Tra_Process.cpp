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
            if (total.bookNo == hold.bookNo){
                total.revenue += hold.revenue;
                total.units_sold += hold.units_sold; 
            }
            else {
                cout<<total.bookNo<<'\t'<<total.units_sold<<'\t'<<
                total.revenue<<endl;
                total.bookNo = hold.bookNo;
                total.revenue = hold.revenue;
                total.units_sold = hold.units_sold;
            }
        }
        cout<<total.bookNo<<'\t'<<total.units_sold<<'\t'<<
        total.revenue<<endl;
    }
    else {
        cerr<<"No Data"<<endl;
    }
    return 0;
}