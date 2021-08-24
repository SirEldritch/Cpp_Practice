#include <string>
#include <iostream>

using namespace std;

int main(){
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix){
        ia[ix-1] = ix;
        // The issue is regard to how computers looks at
        // vectors and arrays, it starts from 0 and the code starts
        // from 1. Without the -1, the code skips the first zero
        // since ix[1] not ix[0] therefore it won't show it. The
        // ix goes up to ix[9] and ix[10] would create a non-existent
        // object which ain't no good.
        cout<<ix<<endl;
    }
    return 0;
}