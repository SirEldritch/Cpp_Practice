/*
Exec Code:
int arry[] = {0,1,2,3,4,5};
int *p1 = arry, *p2 = arry;
p1 += p2 - p1;
// Same as p1[0] = (p2[0] - p1[0]) + p[0];
//                     =>0 +p[0]
cout<<*p1<<endl;
*/

#include <iostream>
#include <vector>

using namespace std;
using std::vector;

// This replaces all elements in the array to zero
void Ex1(){
    int arry[] = {0,1,2,3,4,5};
    int *bpointer = begin(arry), *epointer = end(arry);
    while (bpointer != epointer){
        *bpointer = 0;
        ++bpointer;
    }
    for (auto &i : arry){
        cout<<i<<endl;
    }
}

void Ex2(){
    int user_Int_1[] = {1,5,6,9,2,6};
    int user_Int_2[] = {1,3,6,9,8,7};
    unsigned check = 0;
    int *fp  = user_Int_1, *sp = user_Int_2;
    for (auto &o : user_Int_1){
        if (*fp == *sp){
            ++check;
        }
        ++fp,++sp;
    }
    cout<<"There were this many equal variables found: "<<check<<'\n';
}

void Ex3(){
    vector<int> arry_one = {0,1,2,3,4,5}, arry_two = {0,1,3,3,4,5};
    int *p1 = &arry_one[0], *p2 = &arry_two[0];
    unsigned ncheck = 0;
    for(auto it = arry_one.begin(); 
        it != arry_one.end();
        ++it){
            if (*p1==*p2){
                ++ncheck;
            }
            ++p1,++p2;
    } 
    cout<<"There were this many equal variables found: "<<ncheck<<'\n';   
}

int main(){
    Ex3();
    return 0;
}