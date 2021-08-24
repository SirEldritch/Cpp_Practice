/*
This code just counts many times a number reoccurs in a row before it breaks. THIS DOES NOT COUNT A NUMBER IF THE SEQUENCE IS BROKEN, SO HAVING THE
SAME NUMBER AFTER DIFFERENT NUMBER THAT BROKE SEQUENCE WON'T COUNT.
*/
#include <iostream>
int main(){
    int currVal = 0, val = 0;
    //Double check we got data to process, Only looks at the first number
    if(std::cin>>currVal){
        int cnt = 1;
        while(std::cin>>val){ //read remaining numbers
            if(val==currVal){ //if the values are the same, add one to the count
                ++cnt;
            }
            else{
                std::cout<<currVal<<" occurs "<<cnt
                << " times" << std::endl;
                currVal = val; 
                /*
                currVal holds the current number, val reads the istream to find all numbers that meet the condition
                'val==currVal' then changes to the next number. Then the currVal gets overwritten with the new val.
                */
                cnt = 1;
            }
        }
        std::cout<<currVal<<" occurs "<<cnt
        << " times" << std::endl;
    }
    return 0;
}

/*
Example:
5 4 5 5 5 5 6 5 5 5
5 occurs 1 time
4 occurs 1 time
5 occurs 4 times
6 occurs 1 time
5 occurs 3 times
*/