/*
This shows how to add strings together.
New Info:
You can use += for strings.
*/
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s1 = "hello, ", s2 = "world\n";
    string s3 = s1 + s2;
    s1 += s2;
    cout<<s1<<s2<<s3<<endl;
    return 0;
}