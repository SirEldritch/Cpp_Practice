#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;

using FP = int(*)(int,int);

int func_Add(int i, int j){
    cout<<__func__<<endl;
    return i + j;
}
int func_Sub(int i, int j){
    cout<<__func__<<endl;
    return i - j;
}
int func_Div(int i, int j){
    cout<<__func__<<endl;
    return i / j;
}
int func_Mul(int i, int j){
    cout<<__func__<<endl;
    return i * j;
}


FP func_Pointer(const string &k){
    if (k == "Add"){
        return func_Add;
    } 
    else if (k == "Subtract"){
        return func_Sub;
    }
    else if (k == "Divide"){
        return func_Div;
    }
    else{
        return func_Mul;
    }
    return nullptr;
}

int main(){
    int i, j;
    string k;
    cout<< "Please Enter two numbers then action: "<<endl;
    vector<FP> vec_Func = {};
    
    while (cin>>i>>j>>k){
        vec_Func.push_back(func_Pointer(k));
        cout<<func_Pointer(k)(i,j)<<endl;
    }

    for (auto &o: vec_Func){
        cout<<o(4,2)<<endl;
    }

    return 0;
}
