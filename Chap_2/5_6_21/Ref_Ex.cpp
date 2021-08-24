#include <iostream>
void Question_1();
void Question_2();
void Question_3();

int main(){
    Question_1();
    std::cout<<std::endl;
    Question_2();
    std::cout<<std::endl;
    Question_3();
    return 0;
}

void Question_1(){
       int ival = 1.01;
    //      ival = 1
    //int &rval1 = 1.01
    //      Cannot reference a number
    int &rval2 = ival;
    //      rval2 = 1
    //int &rval3;
    //      Cannot reference nothing
    std::cout<<ival<<'\t'<<rval2<<std::endl; 
}

void Question_2(){
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    std::cout<<i<<'\t'<<r1<<'\t'<<d<<'\t'<<r2<<std::endl;
    r2 = 3.14159;
    std::cout<<i<<'\t'<<r1<<'\t'<<d<<'\t'<<r2<<std::endl;
    r2 = r1;
    std::cout<<i<<'\t'<<r1<<'\t'<<d<<'\t'<<r2<<std::endl;
    i = r2;
    std::cout<<i<<'\t'<<r1<<'\t'<<d<<'\t'<<r2<<std::endl;
    r1 = d;
    std::cout<<i<<'\t'<<r1<<'\t'<<d<<'\t'<<r2<<std::endl;
}

/*
If the r2=r1 line wasn't there, i = r2 and r1 = d would not
be feasible since int != double. All the decimal points will
go missing for r1/i.
*/

void Question_3(){
    int j, &rj = j;
    j = 5;
    std::cout<<j<<'\t'<<rj<<std::endl;
    rj = 10;
    std::cout<<j<<'\t'<<rj<<std::endl;
}

/*
j/rj both don't have a value stored at their memory address.
Therefore, when j = 5, both become 5 then rj = 10, both become
10. )
*/