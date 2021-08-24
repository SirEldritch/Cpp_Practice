#include <iostream>
using namespace std;
void n_compare(int ival, int *ptr){
    if (ival > *ptr)
        cout<<"Ival is bigger"<<endl;
    else
        cout<<"Ptr is bigger"<<endl;
}


int main(){
    int i = 5;
    n_compare(4,&i);
    return 0;
}