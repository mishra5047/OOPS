#include <iostream>

using namespace std;

class Bank{

    string Branch;

public:
    static string name;
    static int id;
    static int count;

    Bank(){
        count++;
    }

    static void showDetails(){
        cout<<"\n Id of user is \t"<<id;
        cout<<"\n Name is \t"<<name;
        cout<<"\n Number of users are \t"<< count;
    }
};
string Bank::name = "abc";
int Bank::count = 4;
int Bank::id = 10;


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

    Bank::showDetails();
}