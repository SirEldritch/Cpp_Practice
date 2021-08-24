#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main(){
    vector<int> hvec = {0,1,4,8,4,5,6};
    int arry[hvec.size()];
    for (int it = 0; it != hvec.size(); ++it){
        arry[it] = hvec[it];
    }
    for (auto &o : arry){
        cout<<o<<endl;
    }
    return 0;
}