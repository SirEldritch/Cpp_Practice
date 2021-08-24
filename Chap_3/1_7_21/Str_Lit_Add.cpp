#include <string>
#include <iostream>
using namespace std;

int main(){
    string s1 = "hello", s2 = "world";
    string s3 = s1 + ", " + s2 + '\n';
    string s4 = s1 + ", " + '\n';
    //string s5 = "hello" + ", ";
    // We aren't allowed to add to literals like this. They aren't
    // strings.
    string s6 = s1 + ", " + "world" + "\n";
    //string s7 = "hello" + ", " + s2;
    // Same issue as s5, imagine this as ("hello" + ", ") + s2.
    // ("hello" + ", ") is uber illegal since they are literals.
    cout<<s3<<s4<<s6;
    return 0;
}