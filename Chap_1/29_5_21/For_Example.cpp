#include <iostream>
/*
This just adds all the numbers between -100 to 100 (which is zero)
*/
int main(){
    int sum;
    //for(initialize variable; condition; how to meet that condition)
    for(int i = -100; i <= 100; ++i){
        sum += i;
        std::cout<<sum<<std::endl;
    }
    return 0;
}