// This is to show that you can times two numbers in an out statement
#include <iostream>
int main(){
    std::cout << "Enter two numbers you want to multiply: " << std::endl;
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "Those numbers multiplied together is: " << num1*num2 << std::endl;
    return 0;
}