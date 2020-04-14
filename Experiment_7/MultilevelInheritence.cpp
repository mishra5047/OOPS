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
        cout<<"\n Id is \t"<<id;
    }
};

class Account : public Bank{

public:
    string Acc_Name;
    int age;

    void setAcc(string na, int a){
        Acc_Name = na;
        age = a;
    }

    void showAcc(){
        cout<<"\n Account Name is "<<Acc_Name;
        cout<<"\n Age is \t"<<age;
    }

};

class FixedDeposit : public Account{

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
        showAcc();
    }
};

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }
};

int main(){

    Console console;
    console.details();

    FixedDeposit deposit(5);
    deposit.setAcc("abc", 9);
    deposit.showDetail();
    deposit.EnterDetails("xyz", "west", 10);
    deposit.showDetails();
}