#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::vector;

using FP = int(*)(int,int);

int func_Add(int i, int j){
    return i + j;
}
int func_Sub(int i, int j){
    return i - j;
}
int func_Div(int i, int j){
    return i / j;
}
int func_Mul(int i, int j){
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
    cin >> i >> j >> k;
    cout<<func_Pointer(k)(i,j)<<endl;
    return 0;
}