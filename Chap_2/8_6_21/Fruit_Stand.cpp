/*
Just a reflection from Sales_Data_Ex to see if I learnt anything ;]

Vscode does act strange sometimes, will flag red despite no issue seen
or found.
*/
#include "Fruit_Back.h"
#include <iostream>

int main(){
    
    Available_Fruit data1, data2, data3, data4;

    std::cin>>data1.Fruit_Type >>data1.Fruit_Brought>>data1.Fruit_Mass>>data1.Fruit_Price;
    std::cin>>data2.Fruit_Type >>data2.Fruit_Brought>>data2.Fruit_Mass>>data2.Fruit_Price;
    std::cin>>data3.Fruit_Type >>data3.Fruit_Brought>>data3.Fruit_Mass>>data3.Fruit_Price;
    std::cin>>data4.Fruit_Type >>data4.Fruit_Brought>>data4.Fruit_Mass>>data4.Fruit_Price;

    if (data1.Fruit_Type==data2.Fruit_Type){
        
        unsigned Totalmass = data1.Fruit_Mass+data2.Fruit_Mass;
        double Totalprice = data1.Fruit_Price+data2.Fruit_Price;
        unsigned NoFruit = data1.Fruit_Brought+data2.Fruit_Brought;
        
        if (NoFruit!=0){
            std::cout<<"Fruit Type: \t"<<data1.Fruit_Type<<std::endl;
            std::cout<<"Total Mass: \t"<<Totalmass<<std::endl;
            std::cout<<"Total Price:\t"<<Totalprice<<std::endl;
            std::cout<<"No. of Fruit:\t"<<NoFruit<<std::endl;

            std::cout<<"Fruit Type: \t"<<data3.Fruit_Type<<std::endl;
            std::cout<<"Total Mass: \t"<<data3.Fruit_Mass<<std::endl;
            std::cout<<"Total Price:\t"<<data3.Fruit_Price<<std::endl;
            std::cout<<"No. of Fruit:\t"<<data3.Fruit_Brought<<std::endl;

            std::cout<<"Fruit Type: \t"<<data4.Fruit_Type<<std::endl;
            std::cout<<"Total Mass: \t"<<data4.Fruit_Mass<<std::endl;
            std::cout<<"Total Price:\t"<<data4.Fruit_Price<<std::endl;
            std::cout<<"No. of Fruit:\t"<<data4.Fruit_Brought<<std::endl;
            return 0;
        } else {
            std::cerr<<"Yo, The Fuck?"<<std::endl;
            return -1;
        }      
    }
}