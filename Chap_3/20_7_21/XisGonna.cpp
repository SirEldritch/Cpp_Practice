/*
Ex 1:
This would replace all chars in the string with X instead.
Ex 2:
Refer to the comment in the code.
Ex 3:
XisGonna.cpp
WhileExIns.cpp
ForExInsT.cpp
The non-traditional for loop in XisGonna.cpp and the while
loop in WhileExIns.cpp were the shortest code wise. The traditional
for loop in ForExInsT.cpp is longer and more complicated but it allows
you to add conditionals in the loop statement instead of a seperate if
statement inside the loop unless I am being dumb?
Ex 4:
string s;
cout<<s[0]<<endl;
You can print this but it will print nothing since the
string has been declared but not defined. It stores
nothing.
Ex 5:
GetPuncKid.cpp
This code only takes one string and not a line sadly, but using
the previous example, you can replace punctuation with 'nothing'
weirdly enough. You cannnot use '' but a string at the matrix/vector
position 0.
Ex 6:
It do be working, as long as you do not try to change the const
variable present within the loop statement you dumb silly.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string User_Int;
    cout<<"Please enter a string: "<<endl;
    cin >> User_Int;
    for (auto &buff: User_Int){
        // You can replace auto with char, it does the same thing
        // the code is smart enough to decipher what it is
        buff = 'X';
    }
    cout<<User_Int<<endl;
/*
    const string h = "Keep Out";
        for (auto &c : h){
            cout<<"It be working dude"<<endl;
        } 
*/
    return 0;
}