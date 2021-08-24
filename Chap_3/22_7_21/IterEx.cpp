#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

int main(){
    string User_Int;
    vector<string> sresult;
    while(cin>>User_Int && User_Int != "end"){
        sresult.push_back(User_Int);
    }

    for (auto iter = sresult.begin(); 
        iter != sresult.end(); ++iter){
            cout<<*iter<<endl;
        }
    cout<<"Terminated Running Task "<<endl;

    return 0;
}