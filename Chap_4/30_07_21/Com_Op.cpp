/*
This was to showcase the power of the comma operator. So we can add less into the 
block {} and more into the statement (initialize;expr;answer) 
*/

#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main(){
    vector<int> ivec = {2,2,2,2,2,2,2,2,2,2,2,2,2};
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix,--cnt){
        ivec[ix] = cnt;
        cout<<cnt<<endl;
    }
    return 0;
}