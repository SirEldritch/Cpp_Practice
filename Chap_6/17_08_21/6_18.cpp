/*
This looks disgusting, sorry future me :(
*/
#include <iostream>
#include <vector>
#include "Matrix.h"

using namespace std;
using std::vector;

vector<int> rvec = {2,5,3,6,6,4,6};

bool compare(Matrix_Data& data1, Matrix_Data& data2){
    return data1.frow == data2.frow;
}

vector<int>::iterator change_val(int ival, vector<int>::iterator it)
{
    for (; it != rvec.end(); ++it){
        if(*it == ival){
            *it = ival*10;
            break;
        }
    }
    return it;
}


int main(){
    Matrix_Data One, Two;
    cout<<compare(One, Two)<<endl;
    auto cont = change_val(4,rvec.begin());
    cout<<*cont<<endl;
    for (auto &o :rvec){
        cout<<o<<endl;
    }
    return 0;
}