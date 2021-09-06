#include <iostream>
#include <vector>
using namespace std;
using std::vector;

using FP = int(*)(int,int);

int func_Example(int i,int j){
    return i+j;
}

FP func_Pointer(){
    cout<<"Something"<<endl;
    return func_Example;
}


int main(){
    vector<FP> vec_Func = {};
    vec_Func.push_back(func_Pointer()); 
    cout<<func_Pointer()(4,5)<<endl;;
    return 0;
}


