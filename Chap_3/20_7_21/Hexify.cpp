/*
This code is made to convert integers to hexadecimals only if the 
integers are below 15. It uses the unknown numbers of inputs while
loop, refer to End_Of_Line in Chap_1 folder. 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    const string hexdigits = "0123456789ABCDEF";
    // size of this string is sixteen, count the digits and letters
    string result;
    // this stores the result of the loop and conditional
    string::size_type n;
    // allows the input to be compared to hexdigits
    // string_name.size() == string::size_type x
    // think of it like int == int or char == char
    while (cin>>n){
        if (n<hexdigits.size()){
            //compares n and the string size
            result += hexdigits[n];
        }
    }
    cout<<result<<hexdigits.size()<<endl;
    return 0;
}