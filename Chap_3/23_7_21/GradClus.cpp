/*
This can be:
auto grade = scores.begin();
grade += (user_Int/10);
++(*grade);

Changed into this:
// Excess brackets maybe?
++(*(scores.begin()+(user_Int/10)));
*/
#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::vector;

    int main(){
    vector<unsigned> scores(11,0);
    cout<<"Enter Grades: "<<endl;
    unsigned user_Int;
    while(cin>>user_Int){
        ++(*(scores.begin()+(user_Int/10)));
    }    
    for (auto o = scores.begin(); o != scores.end(); ++o){
        cout<<"Grade Clusters: "<<*o<<endl;
    }
    return 0;
}