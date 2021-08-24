#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main(){
    int arry[] = {0,1,2,3,4,9};
    vector<int> tvec(begin(arry),end(arry));
    for (auto &o : tvec){
        cout<<o<<endl;
    }
    return 0;
}