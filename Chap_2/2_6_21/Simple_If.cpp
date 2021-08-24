/*
You can make a boolean if statement with if(Num). If the number
is greater than or less than zero, it will pass through the if 
condition. If it is exactly equal to zero, the condition has not 
been made for execution!
*/
#include <iostream>
int main(){
    int i = -10;
    int b = 10;
    if(i){
        std::cout<<b<<std::endl;
    }
    else{
        std::cout<<5<<std::endl;
    }    
    return 0;
}