#include <iostream>
/*
The advantage is that it is quicker and you need one less variable compared
to the while loop. Only problem is that you need to initialize the variable
in the for loop.
*/
int main(){
    int sum;
    for(int i = 50; i <= 100; ++i){
        sum += i;
    }
    std::cout<<sum<<std::endl;
    return 0;
}