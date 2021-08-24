#include <iostream>
using namespace std;

void print(const int i, const int *beg, const int *end){
    // This compares the memory addresses of one another
    while (beg != end){
        // Must use dereference operator to look at what
        // the pointer is pointing
        cout<<*beg<<endl;
        *beg++;
    }
    cout<<i<<endl;
}

int main(){
    int i = 0, j[2] = {0,2}; 
    print(i,begin(j),end(j));
    return 0;
}