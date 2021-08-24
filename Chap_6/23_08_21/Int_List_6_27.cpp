/*
Forgetting using namespace std will trip you up. Needs to be:
std::initializer_list
Also, a list is {} if you want it
*/
#include <iostream>

void sum_List(const std::initializer_list<int> arr){
    int sum = 0;
    for (auto &o: arr){
        sum += o;
    }
    std::cout<<sum<<std::endl;
}

int main(){
    sum_List({5,6,1,3,9,7});
    return 0;
}