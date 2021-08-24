#include <iostream>

int main(){
    /*
    do{
        int v1, v2;
        std::cout<<"Please enter two numbers: "<<std::endl;
        if (std::cin>>v1>>v2)
            std::cout<<"Sum is: "<<v1+v2<<std::endl;
    } while (std::cin);
        It was missing brackets
    */

    /*
    do (
        //...
    ) while (int ival = get_Response());
    //  You are not meant to intiliaze anything in while cond
    */

    /*
    do
    {
        int n_Val = 4;
    } while (n_Val);
    // Weird things going on, it was defined before the while
    // so it should be fine?
    */
    return 0;
}