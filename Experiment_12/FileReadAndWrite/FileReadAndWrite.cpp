#include <iostream>
#include <fstream>

using namespace std;

class Bank{
    string Name;
    string Branch;
    int id;

public:

    void enterDetails();
    void findMember();
};

void Bank::enterDetails(){
    fstream fstream1;
    Bank bank;
    fstream1.open("Third.txt", ios::trunc);

    string name = "ABC";
    string branch = "WEST";
    int i = 10;

    bank.Name = name;
    bank.Branch = branch;
    bank.id = i;
//    fstream1.write((char*)&bank, sizeof(bank));

    name = "XYZ";
    branch = "EAST";
    i = 15;

    bank.Name = name;
    bank.Branch = branch;
    bank.id = i;
//    fstream1.write((char*)&bank, sizeof(bank));

    name  = "DEF";
    branch = "NORTH";
    i = 20;

    bank.Name = name;
    bank.Branch = branch;
    bank.id = i;
    fstream1.write((char*)&bank, sizeof(bank));

}

    void Bank::findMember() {
        cout << fstream("Third.txt").rdbuf();
    }
//        int mem = 0;
//    string name;
//
//    fstream1.open("Input.txt", ios::in);
//    Bank bank;
//    fstream1.read((char*)&bank, sizeof(bank));
//
//    while(!fstream1.eof()) {
//        if (bank.id == 15)
//            name = bank.Name;
//
//        else
//            fstream1.read((char*)&bank, sizeof(bank));
//    }
//        return name;


class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void input(){
        Bank bank;
        bank.enterDetails();
        bank.findMember();
    }
};

int main() {
    Console console;
    console.details();
    console.input();
}