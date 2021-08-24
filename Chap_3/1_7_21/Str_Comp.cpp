/*
If the string has the same characters in the start but differ
in size, the smaller string will be the shortest size.

If the string differs in the second character, the one
with the most latest letter in the alphabet will be the
bigger string.

Example using the code in this file:
sa and sz
sz will be printed

uuuu7 and uuuu5
uuuu7 will be printed

Yo and Yo1
Yo1 will be printed

*/
#include <string>
#include <iostream>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1<s2)
        cout<<s2<<endl;
    else
        cout<<s1<<endl;
    return 0;        
}