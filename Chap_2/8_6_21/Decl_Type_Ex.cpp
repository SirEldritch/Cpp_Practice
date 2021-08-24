/*
The decltype will only give a reference if decltype((variable))
or decltype(x = y). No other operations for now will determine a
reference unless the variable before is a reference itself.
Example:
int i = 5, &r = i;
decltype(r) nr = i;
// decltype(r) == int&
*/
#include <iostream>
void Excercise_2();
void Self_Example();
int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    // new variable that copies data in a
    decltype((b)) d = a;
    // This is a reference to a, therefore ++d will increase
    // a by 1
    // decltype((b)) == int&
    ++c;
    //++d;
    std::cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<std::endl;
    Excercise_2();
    Self_Example();
    return 0;
}

void Excercise_2(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    // a = b is an expression therefore the decltype will be
    // a int& (a reference)
    ++c;
    ++d;
    std::cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<std::endl;
}

void Self_Example(){
    int i = 5, &r = i;
    decltype(r) nr = i;
    ++nr;
    std::cout<<i<<std::endl;
}