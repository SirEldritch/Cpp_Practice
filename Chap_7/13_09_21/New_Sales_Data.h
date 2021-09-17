#ifndef NEW_SALES_DATA
#define NEW_SALES_DATA
#include <string>
#include <iostream>

//ALREADY DEFINED SO YOU DON'T NEED THIS ANYMORE
//struct Sales_data;
//std::istream &read(std::istream &is, Sales_data &item);

class Sales_data{
    //Friends
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
        
    public:
        //Constructor/s
        Sales_data() : bookNo(""), units_sold(0), revenue(0.0) { }
        Sales_data(const std::string &s) : bookNo(s) { }
        Sales_data(const std::string &s, unsigned n, double p): 
            bookNo(s), units_sold(n), revenue(n*p) { }
        Sales_data (std::istream &is) {
            read(is,*this);
        }
        //

        //Functions inside class
        std::string isbn() const {
            return bookNo;
            }
        Sales_data& combine(const Sales_data &rhs){
            units_sold += rhs.units_sold;
            revenue += rhs.revenue;
            return *this;
        }
    
    private:
        inline
        double avg_price() const{
            if (units_sold)
                return revenue/units_sold;
            else
                return 0;
        }
        //

        // Data
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
        //
};

// Functions outside of class
std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue
    << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

//
#endif