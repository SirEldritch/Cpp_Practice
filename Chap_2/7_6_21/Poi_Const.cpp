/*
Very similar to Ref_Const file. The const (data type) *(pointer name)
claims that the object the pointer is pointing to is const. We
can also claim that the pointer is const, not the obj is pointing
to, instead by doing *const (data type) (pointer name)
*/
#include <iostream>
int main(){
    double shop = 7.11;
    const double *pshop = &shop;
    // This way round is fine
    const double banana = 6.51;
    //double *pbanana = &banana;
    // This way round is bad, a pointer obj cannot be able to
    // change if the obj is const.
    int errNumb = 0;
    int *const currNumb = &errNumb;
    // currNumb will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi;
    // pip will always point to const pi
    if(*currNumb){
        *currNumb = 0;
    }
    // Example of having a const pointer in action
    return 0;
}