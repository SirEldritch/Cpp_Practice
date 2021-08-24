#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void Ex1(){
    const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    // While there is something in the array, start from ca[0]
    // towards null at the end
    while(*cp){
        cout<<*cp<<endl;
        ++cp;
        //cout<<*cp<<endl;
    }
}

void Ex2(){
    string s1 {"This is silly"};
    string s2 {"This is sillz"};
    if (s2<s1){
        cout<<s1<<"\n";
    } else if (s1==s2) {
        cout<<"They are the same..."<<endl;
    } else {
        cout<<s2<<"\n";
    }
}

void Ex3(){
    const char char_Arr_One[] = "Wowzers";
    const char char_Arr_Two[] = "Wowzeri";
    int l = strcmp(char_Arr_One,char_Arr_Two);
    if (l == 0){
        cout<<"They are the same..."<<endl;
    } else if (l > 0){
        cout<<"The First String is Bigger"<<endl;
    } else {
        cout<<"The Second String is Bigger"<<endl;
    }
}

void Ex4(){
    const char char_Arr_One[] = "Wowzers";
    const char char_Arr_Two[] = "this is awesome!";
    char char_Arr_Three[] = {};
    strcpy(char_Arr_Three, char_Arr_One);
    strcat(char_Arr_Three, " ");
    strcat(char_Arr_Three, char_Arr_Two);
    cout<<char_Arr_Three<<endl;
}

int main(){
    Ex4();
    return 0;
}