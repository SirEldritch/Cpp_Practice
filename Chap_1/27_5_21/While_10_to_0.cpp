#include <iostream>
int main(){
    int desvar = 10;
    while(desvar>=0){
        std::cout << desvar << std::endl;
        //this does desvar = desvar - 1
        --desvar;
    }
    return 0;
}