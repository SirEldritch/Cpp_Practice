#include <iostream>

int main(int argc, char *argv[]){
    std::cout<<"Please pick an option: "<<std::endl;
    std::cout<<"1. Time Travel"<<std::endl;
    std::cout<<"2. Teleportation"<<std::endl;
    std::cout<<"3. Invisibility"<<std::endl;
    std::cout<<"4. Gravity Manipulation"<<std::endl;
    
    std::cout<<"Your Selection: "<<std::endl;
    char option_Picked = *argv[1];
    switch (option_Picked)
    {
    case '1':
        std::cout<<"You do be dumb"<<std::endl;
        break;
    case '2':
        std::cout<<"You do be silly"<<std::endl;
        break;
    case '3':
        std::cout<<"You do be hungry"<<std::endl;
        break;
    case '4':
        std::cout<<"You do be smart"<<std::endl;
        break;   
    default:
        std::cout<<"What the hell are you doing? "<<std::endl;
        break;
    }
    return 0;
}