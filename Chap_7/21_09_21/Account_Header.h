#ifndef ACCOUNT_HEADER
#define ACCOUNT_HEADER
#include <string>

class Account{
    public:
        Account(const std::string name, double cash) : 
            owner(name), amount(cash) {}
        Account() : Account("John Doe", 100.0) {}
        void calculate() {amount += amount * interestRate; }
        double reveal() { return amount;}
        static double rate() {return interestRate; }
        static void rate(double);
    private:
        std::string owner;
        double amount;
        static double interestRate;
        static double initRate() {return 0.02;}
};

void Account::rate(double newRate){
    interestRate = newRate;
}

double Account::interestRate = initRate();

#endif