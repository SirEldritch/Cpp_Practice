/*
Stranger way of doing a while loop? The advantage is maybe the
clarity of mind I presume.
UPDATE:
It's like a flow chart conditional, it will execute the code
once before it checks the conditional. If it is false, it will
execute the do again.
*/
#include <iostream>

int main(){
    int x = 0;
    do
    {
        std::cout<<"Loading"<<std::endl;
        ++x;
    } while (x<10);
    std::cout<<"Terminating Task"<<std::endl;    
    return 0;
}