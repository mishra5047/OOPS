#include <iostream>

using namespace std;

class Bank{
    string Name;
    string Branch;
    int id;

public:

    void EnterDetails(string nam, string bran, int i){
        Name = nam;
        Branch = bran;
        id = i;
    }

    void showDetails(){
        cout<<"\n Name is \t"<<Name;
        cout<<"\n Branch is \t"<<Branch;
        cout<<"\n Id is \t\t"<<id;
    }
};

class FixedDeposit : public Bank{

public :
    int amount;

    FixedDeposit(){
        amount = 0;
    }

    FixedDeposit(int am){
        if(am != 0)
            amount = am;
    }
    void showDetail(){
        cout<<"\n amount is\t"<<amount;
        showDetails();
    }
};

class Console{
public:
    void details()
    cout<<"\n\t Abhishek Mishra \n";
    cout<<"\n\t    06-CSE-A \n";
    }
};

int main() {

    Console console;
    console.details();

    FixedDeposit deposit(50);
    deposit.EnterDetails("abc", "xyz", 10);
    deposit.showDetail();
}