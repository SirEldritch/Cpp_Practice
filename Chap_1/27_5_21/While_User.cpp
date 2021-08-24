#include <iostream>
int main(){
    //Create two empty integers
    int v1, v2;
    std::cout<<"Enter two numbers for desired range: " << std::endl;
    //Request to inputs
    std::cin>>v1>>v2;
    //While the first entered number does not equal to the second, add or substract 
    while(v1!=v2){
        std::cout << v1 << std::endl;
        //If the first val is more than the second, subtract by 1
        if(v1>v2){
            --v1;
        }
        //Else, add by 1
        else{
            ++v1;
        }
    }
    /*
    This outputs the second value entered due to the fact that the loop will never print the last value sadly enough. This could be circumvented by
    having to different voids where an if statement in the main would go through one of those and the while statement is more than equal to or less
    than equal to to allow the final value outputted in the void and nothing else.
    */
    std::cout<<v2<<std::endl;
    return 0;
}