#include <iostream>
using namespace std;

void f(int &T){
    ++T;
}

int main(){
    int T = 0;
    f(T);
    cout<<T<<endl;
    return 0;
}