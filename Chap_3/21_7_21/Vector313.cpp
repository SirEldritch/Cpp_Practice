/*
Depending on what the initializer is for the vector, the [] and
{} will have different properties.
For ints:
(x,y) will create x amount of y elements
{x,y} will create two elements of which is x and y
For strings:
{x,y} will create x amount of y elements, y must be a string

From what I can gather, () will do operations and {} will not
unless y is string/char.
*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;
using std::vector;

int main(){
    //vector<int> v1;
    // Prints nothing since it's an empty vector.
    //vector<int> v1 (10);
    // Will print 10 elements of 0, 10x1:       True
    //vector<int> v1 (10,42);
    // Will print 10 elements of 42, 10x1:      True
    //vector<int> v1 {10};
    // Will print element 10, 1x1:              True
    //vector<int> v1 {10,42};
    // Will print elements 10 and 42 2x1:
    //vector<string> v1 {10};
    // Will print element 10, 1x1:              False
    // It will print 10 spaces
    vector<string> v1 {10, "hi"};
    // Will print elements 10 of hi:            True


    for (auto i : v1){
        cout<<i<<endl;
    }
    return 0;
}