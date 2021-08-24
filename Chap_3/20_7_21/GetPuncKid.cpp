/*
Get rid of punctuation Excercise
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string user_Int;
    cin >> user_Int;
    string s;
    for(decltype(user_Int.size()) index = 0;
        index != user_Int.size();
        ++index){
            if (!isalnum(user_Int[index])){
                    user_Int[index] = s[0];
            }
    }
    cout << user_Int<<endl;
    return 0;
}