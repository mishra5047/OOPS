#include <iostream>

using namespace std;

class Bank{

public:
    string Name;
    string Branch;
    int id;

    void enterDetails(string nam, string bran, int i){
        Name = nam;
        Branch = bran;
        id = i;
    }

    virtual void showDetails(){
        cout<<"\n Name is \t"<<Name;
        cout<<"\n Branch is \t"<<Branch;
        cout<<"\n Id is \t\t"<<id;
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
        showDetails();
    }

};

class FixedDeposit : public Bank{

public :
    int amount;

    FixedDeposit(){
        amount = 0;
    }

    void setDeposit(int am){
        if(am != 0)
            amount = am;
    }
    virtual void showDetails(){
        cout<<"\n Name is \t"<<Name;
        cout<<"\n Branch is \t"<<Branch;
        cout<<"\n Id is \t"<<id;
    }
};

class ViewData : public Account ,public FixedDeposit{

public:
    void print(){
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

int main() {
    Console console;
    console.details();

    Bank *bank;
    FixedDeposit depo;
    bank = &depo;
    bank->enterDetails("abc", "xyz", 10);
    bank->showDetails();

}