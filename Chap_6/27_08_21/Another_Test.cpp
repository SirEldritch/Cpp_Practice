#include <iostream>

int l[5] = {1,2,3,4,5},
    y[5] ={6,7,8,9,10};

int (*arryFunc(int j))[5]{
    if (j > 5)
        return &l;
    else
        return &y;
    return &l;
}

int main(){
    auto t = arryFunc(6);
    for (auto &o: *t){
        std::cout<<o<<std::endl;
    }
    return 0;
}