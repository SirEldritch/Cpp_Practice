#include <string>
#include <iostream>
using namespace std;
typedef string lmao;
// Remember that I replaced string with lmao, lmao :D
int main(){
    lmao s1;                // s1 is an empty string
    lmao s2 = s1;           // s2 is a copy of s1
    lmao s3 = "hiya";       // s3 is a copy of a literal string
    lmao s4(10, 'a');       // s4 creates a string with 10 'c'
    lmao s5 = "hiya";       // s5 is a copy initialization
    lmao s6("hiya");        // s6 is a direct initialization
    lmao s7(10, 'b');       // see s4
    lmao s8 = lmao(10,'c'); // s8 is a copy initialization
    // string temp(10, 'c')
    // string s8 - temp
    cout<<s1<<'\t'<<s2<<'\t'<<s3<<'\t'<<s4
    <<'\t'<<s5<<'\t'<<s6<<'\t'<<s7
    <<'\t'<<s8<<endl;
    return 0;
}