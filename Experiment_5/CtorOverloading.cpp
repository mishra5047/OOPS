#include <iostream>

using namespace std;

class User {
    int id;
    string name;
    string department;

public:
    User() {
        id = 0, name = "", department = "";
    }

    User(int a, string b, string c) {
        id = a, name = b, department = c;
    }

    User(string na, string depa, int n){
        id = n;
        name =  na;
        department = depa;
    }

    User(string dep, int n, string na){
        id = n;
        name = n;
        department = dep;
    }

    void printDetails(){
        cout<<"\n\n ID is "<<id;
        cout<<"\n Name is "<<name;
        cout<<"\n Department is "<<department;
    }
};

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void show(){
        User us_1(5, "abc", "xyz");
        us_1.printDetails();

        User us_2("ABC", "XYZ", 2);
        us_2.printDetails();

        User us_3("DEF", 3,"BVY");
        us_3.printDetails();
    }
};

int main(){
    Console con;
    con.details();
    con.show();
}