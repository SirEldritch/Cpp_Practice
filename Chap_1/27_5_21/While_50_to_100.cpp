/*
Mistakes were made, another variable, actsum, was introduced since it made no sense to have it as sum += val since that would do
sum = 50 + 1 then sum = 51 + 2. A thought was to do sum += sum + val but then it would be sum = 50 + 50 + 1,
then sum = 101 + 52 then it exp goes up to something crazy.
*/
#include <iostream>
int main(){
    int sum = 50, val = 1, actsum = 50;
    while(val<=50){
        // this does actsum = actsum + sum + val
        actsum += sum+val;
        // this does val = val + 1
        ++val;
    }
    std::cout << "The sum of the numbers between 50 and 100 is: " << actsum << std::endl;
    return 0;
}
