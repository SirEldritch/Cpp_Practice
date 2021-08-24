#include <iostream>
int main(){
    int User_Input;
    std::cout<<"Please Enter Numbers: "<<std::endl;
    //The Expression used in the If Statement only looks for the first interger presented in the istream.
    //The While loops looks for all the istream values present in contrast to the If statement.
    if(std::cin>>User_Input){
        std::cout<<"User Input: "<<User_Input<<std::endl;
    }
    return 0;
}

