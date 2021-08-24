/*
It first checks the row which contains the array of elements in the columns, then
it goes and checks the elements in the column. If you make it bigger, keep in mind
that the array of array of array... the last array will contain the elements and
before you can access it, you must first specifiy everything else.
*/
#include <iostream>
using namespace std;

int main(){
    int ia[2][3] = {{1,2,3},{7,8,9}};
    size_t cnt = 0;
    for(auto &row : ia){
        for (auto &col: row){
            cout<<col<<'\t';
        }
        cout<<endl;
    }
    return 0;
}