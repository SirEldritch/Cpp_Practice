/*
I would say for loop is better than while loops in general,
it can do the same tasks in a much neater fashion.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

vector<int> ivec = {1,3,5,7,9,11,13,15,17};

void loop_For(){
    for(auto &o: ivec){
        cout<<o<<endl;
    }
}

void loop_While(){
    string i;
    while(cin>>i){
        cout<<i<<endl;
    }
}

void loop_For_While(){
    int l = 0;
    while (l != ivec.size()){
        cout<<ivec[l]<<endl;
        ++l;
    }
}

void loop_While_For(){
    for (string i; cin>>i;){
        cout<<i<<endl;
    }
}

int main(){
    loop_For();
    loop_While();
    loop_For_While();
    loop_While_For();
    return 0;
}