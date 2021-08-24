#include <iostream>

size_t count_Iter(){
    static size_t ival = 0;
    std::cout<<ival<<std::endl;
    return ival++;
}

int main(){
    int user_Int;
    while (std::cin>>user_Int){
       if (isalpha(user_Int)){
           break;
       } else {
           count_Iter();
       }
    }
    return 0;
}