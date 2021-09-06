/*
f(2.56,42) is too ambigous as f(int, int) and f(double, double)
are equal in the eye of the compiler as both of them are not 
better nor worse than each other.

f(42) is simply f(int).

f(42, 0) is f(int, int).

f(2.56, 3.14) is f(double, double)
*/

#include <iostream>
using namespace std;

void f(){
    cout<<"No argument/s"<<endl;
}

void f(int i){
    cout<<"One int argument"<<endl;
}

void f(int i, int j){
    cout<<"Two int arguments"<<endl;
}

void f(double i, double j = 3.14){
    cout<<"Two double arguments"<<endl;
}

int main(){
    f();
    return 0;
}