/*
It is fine since the reference operator goes back to an object outside
of the function.
*/
#include <iostream>

int &get(int *arry, int index){
    return arry[index];
}

int main(){
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
    for (auto &o: ia)
        std::cout<<o<<std::endl;
    return 0;
}