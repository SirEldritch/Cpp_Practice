#include <iostream>
#include "Account_Header.h"

int main(){
    Account unknown_Person;
    Account known_Person("Chuck Norris", 2500.00);
    
    unknown_Person.calculate();
    known_Person.calculate();
    
    std::cout<<unknown_Person.reveal()<<std::endl;
    std::cout<<known_Person.reveal()<<std::endl;
    
    Account::rate(0.7);
    unknown_Person.calculate();
    known_Person.calculate();

    std::cout<<unknown_Person.reveal()<<std::endl;
    std::cout<<known_Person.reveal()<<std::endl;
    
    return 0;
}