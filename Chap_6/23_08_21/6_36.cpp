#include <iostream>

int three_Arr[4] ={3,9,15,21};
int two_Arr[4] ={2,4,6,8}; 

// return a pointer to an int array that has 4 elements, 
// arguement is an integer
int (*func(int i)) [4]{
    return ((i % 3) == 0) ? &three_Arr : &two_Arr;
}

int main(){
    auto l = func(3);
    for (auto &o: *l)
        std::cout<<o<<std::endl;
    return 0;
}