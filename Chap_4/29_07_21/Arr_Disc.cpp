#include <iostream>

using namespace std;

int main(){
    int ia[]= {0,1,2,3,4,5,6,7,8,9};
    size_t sa = sizeof(ia)/sizeof(*ia);
    int *p = ia;
    //Let's you find out the array size
    cout<<sa<<endl;
    cout<<sizeof(p)/sizeof(*p)<<endl;
    return 0;
}