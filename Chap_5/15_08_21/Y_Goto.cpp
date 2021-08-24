/*
This is a way to look for a block of code to goto if called,
it would make sense for it to be used with conditionals, if not
we would be in an infinite loop.
*/

#include <iostream>

int main(){
    int x = 0;
    f_label:
        std::cout<<"This is wrong"<<std::endl;
        ++x;
    //std::cout<<"Something Else"<<std::endl;
    while(x < 10){
        goto f_label;
        // nothing after the goto will be executed so we must
        // add the ++x in the label. The while statement will
        // then check on how things are going then it will end
        // the loop
        /*
            BIG BRAIN THEORY:
            The reason why it kept printing the goto label
            until I moved the goto label is due to the fact
            that the goto code would go to another block
            of code. So we I had:
                goto f_label;
                ++x;
            what it really did was
                cout<<"This is wrong"<<endl;
                next iteration (begin while loop again) 
                goto a -> b -> a -> b...
            THEORY IS CORRECT
        */
    }
    std::cout<<"This is right"<<std::endl;
    return 0;
}