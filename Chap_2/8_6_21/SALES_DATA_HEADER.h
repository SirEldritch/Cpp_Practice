/*
If the SALES_DATA_HEADER is not defined (#ifndef) is true,
it will execute all code to #endif in the file. If SALES_DATA_
HEADER is defined, we would use #ifdef instead.
*/
#ifndef SALES_DATA_HEADER
#define SALES_DATA_HEADER
#include <string>
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif