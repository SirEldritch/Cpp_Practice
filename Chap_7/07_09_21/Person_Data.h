#ifndef PERSON_DATA
#define PERSON_DATA
#include <string>
#include <iostream>

struct Person_Data
{
    //One string to hold person name and address
    void Name() const{
        std::cout<<name_Person<<std::endl;
    }
    
    void Address() const{
        std::cout<<home_Address<<std::endl;
    }

    std::string name_Person, home_Address;
};

std::istream &read(std::istream &is, Person_Data &item){
    is>>item.name_Person>>item.home_Address;
    return is;
}

std::ostream &print(std::ostream &os, const Person_Data &item){
    os<<item.name_Person<<" "<<item.home_Address;
    return os;
}

#endif
