/*
A reference is an alias. A pointer points to the memory location
of an object unless specified to look at the variable stored. A
pointer can always alert you on what the object type is. The ptr
can only be valid if the ptr and obj are both initialized the
same way.
*/
void Question_1();
void Question_2();
void Question_3();
void Question_4();

#include <iostream>
int main(){
    Question_1();
    Question_2();
    Question_3();
    Question_4();
    return 0;
}

void Question_1(){
    int val = 10;
    int *point = &val;
    *point = 2;
    std::cout<<*point<<'\t'<<val<<std::endl;
    //Not sure if this is what it asked for?
}
void Question_2(){
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout<<*p1<<'\t'<<i<<std::endl;
    //Visual tongue twister, i * i it is 
}
void Question_3(){
    int j = 42;
    int k = 0;
    int *pj = &j; 
    //True for pointer and address
    //int *pk = k;
    //  True for address only and not for pointer
    int *pk = nullptr;
    //  False for Address and pointer gives and error
    if(pk)
    std::cout<<"Something"<<std::endl;
}
void Question_4(){
    int i = 42;
    void *p = &i;
    //long *lp = &i;
    //  Void can be this weird mysterious thing, not dependant
    //  obj type. The other is defined and does not match.
    int* t;
    std::cout<<t<<std::endl;
    //The pointer initialize itself to nothing at first. It is
    //waiting to be used.    
}