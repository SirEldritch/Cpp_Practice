#include <iostream>
using namespace std;

int main(){
    const char *cp = "Hello World";
    if (cp && *cp) cout<<"Condition is true"<<endl;
    //Both of these output a number which are greater than zero so the condition
    // is true for the both of them
    return 0;
}