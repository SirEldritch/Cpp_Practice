#include <iostream>
using namespace std;

void calc(int& i, int& j){
    cout<<"Non const &int"<<endl;
}

void calc(const int& i, const int& j){
    cout<<"const &int"<<endl;
}

int main(){
    const int a = 53, b = 23;
    int c = 4, d = 3;
    calc(a,b);
    return 0;
}