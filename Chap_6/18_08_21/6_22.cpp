#include <iostream>
using namespace std;

// We used reference of pointers to swap the memory addresses
// of the pointers
void pointer_Swap(int *&fptr, int *&sptr){
    int x = 0, *y = &x;
    y = fptr;
    fptr = sptr;
    sptr = y;
}


int main(){
    int i = 2, j = 3, *Fptr = &i, *Sptr = &j;
    cout<<"Value of i is 2 with this pointer memory address: "<<Fptr<<endl;
    cout<<"Value of j is 3 with this pointer memory address: "<<Sptr<<endl;
    pointer_Swap(Fptr,Sptr);
    cout<<"Value of i is 2 with this pointer memory address: "<<Fptr<<endl;
    cout<<"Value of j is 2 with this pointer memory address: "<<Sptr<<endl;
    return 0;
}