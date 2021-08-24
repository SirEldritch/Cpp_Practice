/*
This is probably the better way of commenting than the other // way
*/
#include <iostream>
int main(){
    std::cout << "/*"; // Legal
    std::cout << "*/"; // Legal
    // std::cout << /* "/*" */; Illegal, no output
    // std::cout << /* "*/" /* "/*" */; Hyper Illegal, Like wtf are you trying to do idiot?
    return 0;
}