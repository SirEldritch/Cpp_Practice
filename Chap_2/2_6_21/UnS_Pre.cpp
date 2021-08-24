#include <iostream>
/*
Predictions:
u2 - u1 = 32
u1 - u2 = big ass number
i2 - i1 = 32
i1 - i2 = -32
i1 - u1 = 0
u1 - i1 = 0
*/
int main(){
    unsigned u1 = 10, u2 = 42;
    int i1 = 10, i2 = 42;
    std::cout<<"U Answers"<<'\n';
    std::cout<<u2-u1<<'\n'; 
    std::cout<<u1-u2<<'\n';
    std::cout<<"I Answers"<<'\n';
    std::cout<<i2-i1<<'\n';
    std::cout<<i1-i2<<'\n';
    std::cout<<"I and U answers"<<'\n';
    std::cout<<i1-u1<<'\n';
    std::cout<<u1-i1<<'\n';
    return 0;
}
/*
Answers:
u2 - u1 = 32
u1 - u2 = big ass number
i2 - i1 = 32
i1 - i2 = -32
i1 - u1 = 0
u1 - i1 = 0
PREDICTIONS ON POINT BABY
*/