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
        cout<<"\n Id is \t\t"<<id<<endl;
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

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void input(){
        Bank *bank;
        Account depo;
        bank = &depo;
        bank->enterDetails("abc", "xyz", 10);
        bank->showDetails();
    }
};

int main() {
    Console console;
    console.details();
    console.input();
}