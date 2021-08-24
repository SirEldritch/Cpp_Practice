#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

int main(){
    vector<int> cvec {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int result;
    for (
        decltype(cvec.size()) index = 0;
        index != cvec.size();
        ++index
        ){
            result = cvec[index] + cvec[index+1];
            cout<<result<<endl;
    }
    return 0;
}