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

class Account : public Bank{
    string Acc_Name;
    int age;

public:

    void setAcc(string na, int a){
        Acc_Name = na;
        age = a;
    }

};

class FixedDeposit : public Bank{
    int amount;

public :
    FixedDeposit(){
        amount = 0;
    }

    void setDeposit(int am){
        if(am != 0)
            amount = am;
    }
    void showDetail(){
        cout<<"\n\n Amount Is\t"<<amount;
        showDetails();
    }
};

class ViewData : public Account ,public FixedDeposit{

public:
    void print(){
        showDetail();
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

    FixedDeposit deposit;
    deposit.setDeposit(5);
    deposit.EnterDetails("XYZ", "West", 10);
    deposit.showDetail();

    Account acc;
    acc.EnterDetails("ABC", "North", 15);
    acc.showDetails();

    ViewData view;
    view.setDeposit(7);

}