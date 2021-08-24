/*
Mistake made:
Both outputted in an ascending order. This was due to the condition and expression
made in these loops. But galdly, a last output line was not needed to display the
last value :) 
*/
#include <iostream>
int main(){
    int v1,v2;
    std::cout<<"Enter two numbers for desired range: " << std::endl;
    std::cin>>v1>>v2;
    if(v1>v2){
        for(int i = v1; i>=v2; --i){
            std::cout<<i<<std::endl;
        }
    }    
    else if(v2>v1){
        for(int i = v1; i<=v2; ++i){
            std::cout<<i<<std::endl;
        }
    } 
    return 0;
}