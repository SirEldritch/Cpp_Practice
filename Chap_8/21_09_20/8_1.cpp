#include <iostream>
#include <vector>

void reading_Stream (std::istream &Input){
    int i;
    std::vector<int> vec;
    while(Input>>i){
        vec.push_back(i);
    }
    for (auto o: vec){
        std::cout<<o<<std::endl;
    }
}

int main (){
    auto old_State = std::cin.rdstate();
    std::cin.clear();
    reading_Stream(std::cin);
    std::cin.setstate(old_State);
    return 0;
}