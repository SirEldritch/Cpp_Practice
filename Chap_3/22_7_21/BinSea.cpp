/*
This is an example of a binary search. It will search for a number
between 0 and 15 using that type of search. Nice fact, *x of an
iteration will show the value of the element instead of position.
It is like a pointer.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;

int main(){
    int user_Int;
    int iter = 1;
    vector<int> nRang {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<"Please Enter a number between 0 and 15: "<<endl;
    cin>>user_Int;
    auto beg = nRang.begin(), end = nRang.end();
    // Beginning and End are both iterations
    auto mid = beg + (end - beg)/2;
    // Bizarre thinking, iteration[15] - iteration[0] = 15
    // iteration[0] + 15/2 = iteration[0] + 8 = iteration[8]
    // Without the brackets, it would do BIDMAS and
    // iteration / integer makes no sense  
    cout<<"Current Number: \t"<<*mid<<endl;
    cout<<"Looking for: \t\t"<<user_Int<<endl;
    while (mid != end && *mid != user_Int){
        if (user_Int < *mid){
            end = mid;
        } else {
            beg = ++mid;
        }
        mid = beg + (end - beg) /2;
        cout<<"Current Number: \t"<<*mid<<endl;
        cout<<"Looking for: \t\t"<<user_Int<<endl;
        ++iter; 
    }
    cout<<"It took this many iterations: \t"<<iter<<endl;
    return 0;
}