/*
This is how you would access a member from a pointer instead of doing
the long-winded way.
*/

#include <string>
using namespace std;

int main(){
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    n = (*p).size();
    n = p->size();
    return 0;
}