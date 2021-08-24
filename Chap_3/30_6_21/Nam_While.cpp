/*
You can int x instead of doing anything else. I something like
this in MATLAB a lot with an empty matrix. The prof complimented
my big brain for thinking in such a way :`)

The point of this excercise is to get rid of std by using namspace.
It get rids of may three key types each time we call something
from the iostream class.
*/
#include <iostream>
using namespace std;

void Option_3();
void Option_2();
void Option_1();

int main(){
    cout<<"Select one of the following options"<<endl;
    cout<<"1. Count down from 100 to 50"<<endl;
    cout<<"2. Count up from 50 to 100"<<endl;
    cout<<"3. Custom"<<endl;
    int User_Int = 0;
    cin >> User_Int;
    if (User_Int==3){
        Option_3();
        return 0;
    }
    else if (User_Int==2)
    {
        Option_2();
        return 0;
    }
    else if (User_Int==1){
        Option_1();
        return 0;
    }
    else{
        cerr<<"It ain't working cheif"<<endl;
        return -1;
    }
}

void Option_1(){
    int a = 100;
    cout<<a<<endl;
    while (a!=50){
        --a;
        cout<<a<<endl;
    }
}

void Option_2(){
    int a = 50;
    cout<<a<<endl;
    while (a!=100){
        ++a;
        cout<<a<<endl;
    }
}

void Option_3(){
    cout<<"Select your integers"<<endl;
    int fi =0, si = 0;
    cin>>fi>>si;
    if (fi < si){
        cout<<fi<<endl;
        while(fi!=si){
            ++fi;
            cout<<fi<<endl;
        }
    }
    else if (fi > si){
        cout<<fi<<endl;
        while(fi!=si){
            --fi;
            cout<<fi<<endl;
        }
    }
    else if (fi == si)
    cout<<"Cheeky ;)"<<endl;
    else
    cout<<"You messed up, terminating code"<<endl;
}