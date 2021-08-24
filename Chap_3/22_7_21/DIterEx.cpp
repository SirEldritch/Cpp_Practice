#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

int main(){
    vector<int> result_Adding_Numbers{1,2,3,4,5,6,7,8,9,10};
    for (auto it = result_Adding_Numbers.begin();
        it != result_Adding_Numbers.end();
        ++it){
            *it *= *it;
            cout<<*it<<endl;
    }
    return 0;
}