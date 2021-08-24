#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> fvec = {1,2,3,4,5}, svec = {1,2,3,4,8};
    std::string check = "true";
    if (fvec.size() < svec.size()){
        for(size_t i= 0; i < fvec.size(); ++i){
            if (fvec[i] != svec[i]){
                check = "false";
            }
            std::cout<<fvec[i]<<'\t'<<svec[i]<<std::endl;
        }
        std::cout<<"First Loop"<<'\t'<<check<<std::endl;
    }
    else{
        for(size_t i= 0; i < svec.size(); ++i){
            if (svec[i] != fvec[i]){
                check = "false";
            }
            std::cout<<fvec[i]<<'\t'<<svec[i]<<std::endl;
        }
        std::cout<<"Second Loop"<<'\t'<<check<<std::endl;
    }
    return 0;
}