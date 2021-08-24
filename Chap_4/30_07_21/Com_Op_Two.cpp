/*
Another tip about the comma operator, if goes from left to right, therefore in a while
loop it is paramount to have the conditional at the end unless you want to code
to go on forever. I would say it is nicer than having two extra lines for no reason.
*/
#include <iostream>
using namespace std;

int main(){
    int sum = 0, val = 1;
    while (sum += val, ++val, val <= 10)
    cout<<sum<<'\t'<<val<<endl;
    return 0;
}