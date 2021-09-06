#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int vector_Content(const vector<int> &rv, size_t i){
    cout<<"Current Num in Vector: "<<rv[i]<<", Executing at line: "<<__LINE__<<endl;
    cout<<"Current Function: "<<__func__<<endl;
    cout<<"File Location: "<<__FILE__<<endl;
    cout<<__TIME__<<" "<<__DATE__<<endl;
    if (i != 0)
        return vector_Content(rv,i-1);
    return 1;
}

int main(){
    vector<int> a_Vec = {5,5,6,7,8,2,2,1};
    auto size = a_Vec.size()-1;
    vector_Content(a_Vec,size); 
    return 0;
}