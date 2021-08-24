/*
I can't verify the code so I assume it works, I don't know how
to exit a while loop and then continue to a new loop.
UPDATE 1:
Just add a conditional lol. It's so easy. Another thing,
you cannot mix words and letters in first input, it will 
terminate task 1 and task 2.
UPDATE 2:
You can print, you got to use the for loop from last time to
do so. It will print each vector individually.
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using std::vector;

void Example_1(){
    int User_Int;
    vector<int> fresult;
    while(cin>>User_Int && User_Int != 1){
        fresult.push_back(User_Int);
    }
    // -----------------------------------------
    for (auto iter : fresult){
        cout<<iter<<endl;
    }
    // -----------------------------------------
    cout<<"Terminated Task 1"<<endl;
}

void Example_2(){
    string User_Int;
    vector<string> sresult;
    while(cin>>User_Int && User_Int != "end"){
        sresult.push_back(User_Int);
    }
    for (auto iter : sresult){
        cout<<iter<<endl;
    }
    cout<<"Terminated Task 2"<<endl;
}


int main(){
    Example_1();
    Example_2();
    return 0;
}