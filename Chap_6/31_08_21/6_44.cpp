#include <iostream>
#include <string>
using namespace std;


inline const bool
isShorter(const string &s1, const string &s2){ 
    return s1.size() < s2.size();
}

inline const string &
another_Shorter(const string &s1, const string &s2){
    return s1.size() <= s2.size() ? s1 : s2;
}


int main(){
    string s1 = "Amazing", s2 = "Not Cool";
    cout<< isShorter(s2,s1) << endl;
    return 0;
}