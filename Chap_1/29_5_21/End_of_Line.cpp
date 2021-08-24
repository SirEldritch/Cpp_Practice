/*
I don't know the end of line command in terminal therefore just take this as face value.
Interetingly enough, the interger of a letter goes up around 32700~ which is good to know
for the future.
*/
#include <iostream>

void Extra(int x){
    int Extra_sum;
    if (isdigit(x)){
        Extra_sum += x;
    }
    std::cout<<"The sum of these numbers is: "<<Extra_sum<<std::endl;
}

int main(){
    int sum, val;
    //This is how you would add an unknown number of integers
    while(std::cin>>val){
        //Extra(val);
        sum+=val;   
    }
    std::cout<<"The sum of these numbers is: "<<sum<<std::endl;
    return 0;
}

/*
20th July 2021 Update:
I believe that it takes in the control characters like ^D which is ctrl + D which would end
the code but for some reason it still takes it in? Pg 95 refers back to this unknown number
of integers take in which is not beuno that it is not working now.
*/