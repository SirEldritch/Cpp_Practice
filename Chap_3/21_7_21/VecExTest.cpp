/*
It is more efficient to have a vector with an unknown size
due to the fact it is more efficient to add to a vector
than to have a set size limit. This will introduce better
preformance to a task/execution
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using std::vector;
// Getting out of hand, next time I need to include a billion things
int main(){
    int a = 1, b = 2, c = 3;
    string s1 = "a", s2 = "b", s3 = "c";
    vector<int> ivec = {a,b,c};
    vector<string> str = {s1, s2, s3};
    vector<vector<string>> p = {str, str, str};
    cout<<s1<<endl;
    // The issue with cout is the fact of it assuming something
    // in the vectors is switching the way it thinks
    //vector<string> b = (10,"null");
    //  Not legal, due to the fact that the curly brackets weren't
    //  used
    return 0;
}