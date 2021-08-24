/*
The array starts from zero but it will call the command which starts it. 
argv will create a the elements in the array from the user.
argc will give the size of array.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

int main(int argc, char *argv[]){
    vector<string> main_String;
    for(int i = 1; i != argc; ++i){
        main_String.push_back(argv[i]);
        }
    for (auto &o: main_String)
            cout<<o<<" ";
    cout<<endl;
    cout<<argc;
    return 0;
}
