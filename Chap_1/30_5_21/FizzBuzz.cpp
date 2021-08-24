/*
There's probably a better way of doing the FizzBuzz than the way shown below but it's a start I guess? I somehow did not get filtered out
by this 'tricky' coding assignment made for job seeking! The order was due to finding out the biggest number first, then the smallest and then
inbetween. It makes the most sense.
*/
#include <iostream>
int main(){
    for(int i =  1; i<=100; ++i){
        if((i%3)==0 && (i%5)==0){
            std::cout<<"FizzBuzz"<<std::endl;
        }
        else if((i%3)==0){
            std::cout<<"Fizz"<<std::endl;
        }
        else if((i%5)==0){
            std::cout<<"Buzz"<<std::endl;
        }
        else{
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}
/*
Example:
i = 15;
i meets the first condition, print FizzBuzz.
i = 12;
i does not meet the first condition but meets the second, print Fizz.
i = 10;
i does not meet first or second condition but it meets the third, print Buzz.
*/