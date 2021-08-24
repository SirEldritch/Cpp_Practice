/*
Auto is a computer generated expression specifier, if the user
cannot determine what expression to use, the computer can
come up with its own.
*/
#include <iostream>

void Auto_Spec_Ex();

int main(){
    auto i = 0, *p = &i;
    // it determines that i is an int
    //auto sz = 0, pi = 3.14;
    // two different data types therefore auto cannot work
    Auto_Spec_Ex();
    return 0;
}

void Auto_Spec_Ex(){
    int i = 42, &r = i;
    auto a = r;
    //int a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    //int b = ci;
    auto c = cr;
    //int c = cr;
    auto d = &i;
    //int *d = &i;
    auto e = &ci;
    //int *e = &ci;
    auto &g = ci;
    //int &g = ci;
    *d=10;
    std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n'
    <<*d<<'\n'<<*e<<'\n'<<g<<std::endl;
}
/*
Each variable had their value equal to 42. Expect for e, 
there was no problem changing the variable to 42. The reason why
e was illegal was due to the fact that a const int was
already made and therefore the pointer cannot change the
original value. g is a reference to a const int therefore it
could also not be changed.
*/