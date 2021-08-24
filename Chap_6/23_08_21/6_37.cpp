#include <iostream>

int three_Arr[4] ={3,9,15,21};
int two_Arr[4] ={2,4,14,8};

typedef int arrT[4];
// using arrT = int[10]
// ^^^ This is an alternative
arrT* guess_One(int i){
    return ((i % 3) == 0) ? &three_Arr : &two_Arr;
}

auto guess_Two(int j) -> int(*)[4]{
    return ((j % 3) == 0) ? &three_Arr : &two_Arr;
}

decltype(three_Arr) *guess_Three(int k){
    return ((k % 3) == 0) ? &three_Arr : &two_Arr;
}


int main(){
    auto u = guess_One(4), m = guess_Two(3), a = guess_Three(17);
    for (auto &o: *u)
        std::cout<<o<<std::endl;
        std::cout<<std::endl;
    for (auto &o: *m)
        std::cout<<o<<std::endl;    
        std::cout<<std::endl;
    for (auto &o: *a)
        std::cout<<o<<std::endl;    
    return 0;
}