#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main(){
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for (auto &o : ivec){
        o = (o % 2 == 1) ? o*2 : o;
        // Look at Grad_OP.cpp
        cout<<o<<endl;
    }
    return 0;
}