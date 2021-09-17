#ifndef PERSON_HEADER
#define PERSON_HEADER
#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream &is, Person &item);


struct Person
{
    Person() : name_Person(""),  home_Address("") {}
    Person (std::istream &is){
        read(is,*this);
    }
    std::string name_Person, home_Address;
};

std::istream &read(std::istream &is, Person &item){
    is>>item.name_Person>>item.home_Address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &item){
    os<<item.name_Person<<" "<<item.home_Address;
    return os;
}

#endif
