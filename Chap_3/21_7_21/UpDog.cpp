/*
For reference, you need to use push_back, this is not like
MATLAB so you cannot just simply add elements to a vector
that way. It will not say so remember that. Other way is
to create a vector that has 1x1 matrix. Therefore you can
copy a value into it instead?
Illegal Example:
vector<int> ivec;
ivec[0] = 42;
for (auto l : ivec){
    cout<<l<<endl;
}    
UPDATE:
You can do that.
vector<int> ivec(1);
ivec[0] = 42;    
}
*/

/*
There are three ways to create a vector with ten 42's.
vector<int> nvec (10,42);
    This is the quickest
vector<int> nvec {42,42,42...};
    Way to long to do that lmao, are you dumb?
vector<int> nvec(10);
for (auto &x:nvec){
    x = 42;
}
    This is good if we ever need to change an element
OR
vector<int> nvec;
for (int i = 0; i != 10; ++i){
    nvec.push_back(42);
}
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using std::vector;

int main(){
    string User_Int;
    vector<string> result;
    // Read the user input
    while (cin>>User_Int && User_Int!="end"){
        result.push_back(User_Int);
    }
    cout<<"Task Terminated"<<endl;
    
    /*
    for (auto l : result){
        cout<<l<<endl;
    }
    */
    
    cout<<"Beginning Conversion: "<<endl;
    // Figure out how big the vector is, and go by that iteration
    for (
        decltype(result.size()) index = 0;
        index != result.size();
        ++index 
        ){
            // Go through each char in the string and uppercase them
            // if applicable. Ignore anything that isn't a digit or
            // letter
            for (auto &o: result[index]){
                    if(isalnum(o)){
                        // to use toupper or tolower, you got to
                        // equal to itself like below
                        o = toupper(o);
                    }
                }
            // Standard indexing in coding :)
            cout<<result[index]<<endl;
        }  
    return 0;
}
