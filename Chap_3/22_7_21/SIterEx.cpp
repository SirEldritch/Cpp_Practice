/*
Execute code with below:
./SIterEx < TorData
*/

#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

int main(){
    string user_Int;
    vector<string> result;
    
    // Remeber getline(cin , x) XDDDD
    while (getline(cin,user_Int) && user_Int != "end"){
        result.push_back(user_Int);
    }

    for (auto it = result.begin();
        it != result.end();
        ++it){
            if (it == result.begin()){
                for (auto &o: *it){
                    o = toupper(o);
                }
            }
            cout<<*it<<endl;
    }
    cout<<result.size()<<endl;
    return 0;
}