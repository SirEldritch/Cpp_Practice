#include <iostream>
int main(){
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i){
        sum+= i;
        std::cout<<sum<<std::endl;
    }
    return 0;
}

/*
Example from Book:
int main(){
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum+= i;
    std::cout<<sum<<std::endl;
    return 0;
}

The issue related to book example is that it forgets the
curly brackets for the for loop and the cout is outside
that loop. This will only print 100 for i and 45 for sum.
The for statement in the text above will only look at the
first line below when there is no curly brackets which is
good to know.

Really isn't an issue ((.><.)
*/