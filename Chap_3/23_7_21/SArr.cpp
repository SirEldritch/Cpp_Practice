#include <iostream>
using namespace std;

int main(){
    int arry_C[10];
    for(int i = 0; i != 10; ++i){
        arry_C[i] = i;  
        cout<<i<<endl;
    }
    
    /*
    int l = 0;
    for (auto &c: arry_C){
        arry_C[l] = l;
        ++l;
        cout<<c<<endl;
    }
    */

    int narry_C[10];
    for (auto &c: arry_C){
        narry_C[c] = c;
    }

    for (auto &test_Loop : narry_C){
        cout<<test_Loop<<'\t'<<narry_C[(100*2-22*9)]<<endl;
    }
    return 0;
}