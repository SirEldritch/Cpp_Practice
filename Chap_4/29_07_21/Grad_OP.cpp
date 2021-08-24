#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main(){
    int user_Int;
    vector<int> ivec = {45, 75, 56, 12, 45, 98, 50, 64, 67, 85, 74, 90, 12, 100};
    string final_Grade; 
    for (auto &o : ivec){
        final_Grade = (o > 90) ? "high pass" : (o < 60) ? "fail": (o > 75) ? "moderate pass": "pass";
        //Weird if statement, you can do 'expr ? fvar : svar' which means does it meet
        //the requirement? If so, fvar is true. Else, svar is true. Unreadable mess. 
        cout<<final_Grade<<endl;
    }

    string s = "word";
    string p1 = s + ((s[s.size()-1] == 's') ? "" :  "s");
    cout<<p1<<endl;
    return 0;
}