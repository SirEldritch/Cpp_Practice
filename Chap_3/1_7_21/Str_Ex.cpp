#include <string>
#include <iostream>
using namespace std;

string User_Int;

void Excercise_1_1();
void Excercise_1_2();
void Excercise_2();
void Excercise_3();
void Excercise_4();

int main(){
    Excercise_1_1();
    Excercise_1_2();
    Excercise_2();
    Excercise_3();
    Excercise_4();
    return 0;
}


void Excercise_1_1(){
    string line;
    cout<<"Excercise 1.1: "<<endl;
    while(getline(cin,line) && line != "end")
        cout<<line<<endl;
}

void Excercise_1_2(){
    string phrase;
    cout<<"Exercise 1.2: "<<endl;
    while(cin>>User_Int && User_Int != "end"){
        phrase += User_Int + " ";
        cout<<phrase<<'\n';
    }    
}
void Excercise_2(){
    cout<<"Excercise 2: "<<endl;
    cout<<"The getline function includes whitespace while the cin operator does not include them" <<endl;
}
void Excercise_3(){
    cout<<"Excercise 3: "<<endl;
    string s1, s2;
    cin>>s1>>s2;
    // Must be a way to combine two getlines
    if (s1<s2)
        cout<<"The second string is bigger"<<endl;
    else if (s1>s2)
        cout<<"The first string is bigger"<<endl;
    else
        cout<<"What the hell? >:/"<<endl;
}
void Excercise_4(){
    cout<<"Excercise 4: "<<endl;
    cout<<"Excercise completed in 1.1 and 1.2 "<<endl;
}