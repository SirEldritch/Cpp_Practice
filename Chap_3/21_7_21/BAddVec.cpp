#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

int main(){
    vector<int> cvec {9, 8, 7, 6, 8, 4, 3, 2, 1};
    int result;
    for (
        decltype(cvec.size()) index = 0;
        index != cvec.size();
        ++index
        ){
            result = cvec[index] + cvec[cvec.size()-index];
            cout<<result<<endl;
    }
    return 0;
}