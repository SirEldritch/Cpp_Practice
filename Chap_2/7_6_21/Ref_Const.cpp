/*
We can reference an object that is not const as well as values.
As long as the const is not changed, we can express other objects
utilizing that const object. We DON'T know if the reference is
a to const or not, it just changes how we interact with it.
*/
#include <iostream>
using namespace std;
int main(){
    int i = 42;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;
    cout<< i << '\n' << r1 << '\n' << r2 << '\n' << r3 << endl;
    double dval = 3.14;
    const int &cdval = dval;
    // This makes a temporary variable to execute this line.
    // const int temp = dval;
    // const int &cdval = temp;
    // The issue is when we do NOT have a const int, we would have
    // a temp variable that we DON'T want that changes when we
    // refer to cdval or any other reference variable. 
    cout<<cdval<<endl;
    return 0;
}