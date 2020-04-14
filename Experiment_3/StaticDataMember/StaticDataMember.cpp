#include <iostream>

using namespace std;

class Bank{
    string Name;
    string Branch;
    int id;

public:
    static int count;

    Bank(){
        count++;
    }
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
int Bank::count = 0;

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

    Bank bank;
    bank.EnterDetails("abc", "West", 10);

    Bank bank1;
    bank1.EnterDetails("cde","North", 20);

    cout<<"\n Number of accounts are "<<Bank::count;
}