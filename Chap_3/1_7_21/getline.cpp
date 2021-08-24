/*
Important facts:
x.empty()
x.size()
getline(cin,x)
Without the brackets nothing would work so remember them in the
future. 
getline can replace 'cin >>' to grab strings. cin is the incoming
stream therefore we use that first and x is variable that stores
the stream info.
size returns size_types instead of int/unsigned. To store those
variables we need to use string::size_type. Or we can use
auto since auto will detect what we want when we use x.size.
Example:
auto y = x.size //is the same as string::size_type y = x.size
*/
#include <string>
#include <iostream>
using namespace std;

void Example_1();
void Example_2();
void Example_3();

int main(){
    int User_Int;
    cin >> User_Int;
    if (User_Int==1){
        Example_1();
        return 0;
    }   
    else if (User_Int==2){
        Example_2();
        return 0;
    }    
    else if (User_Int==3){
        Example_3();
        return 0;
    }
    else
        return -1;
}

void Example_1(){
    string line;
    while(getline(cin,line))
        cout<<line<<endl;
}
void Example_2(){
    string line;
    while(getline(cin,line)){
        if(!line.empty())
            cout<<line<<endl;
    }
}
void Example_3(){
    string line;
    while(getline(cin,line)){
        if (line.size()>80)
            cout<<line<<endl;
    }
}