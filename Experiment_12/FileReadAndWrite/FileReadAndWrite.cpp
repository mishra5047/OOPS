#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Bank{
    char Name[10];
    char Branch[5];
    int id;

public:
    void print();
    void enterDetails();
    void findMember();
};

void Bank::enterDetails(){
    fstream fstream1;
    Bank bank;
    fstream1.open("Third.txt", ios::out);

    char name[] = "ABC";
    char branch[] = "WEST";
    int i = 10;

    strcpy(bank.Name,name);
    strcpy(bank.Branch,branch);
    bank.id = i;
    fstream1.write((char*)&bank, sizeof(bank));

  fstream1.close();
}
void Bank:: print(){
    cout<<"\n Contents Of The Text File are \n";
    cout<<Name<<endl;
    cout<<Branch<<endl;
    cout<<id<<endl;
}
    void Bank::findMember() {

    char ch;

    Bank bank;

    fstream fstream_1 ;

    fstream_1.open("Third.txt", ios::in);
    fstream_1.read((char*)&bank, sizeof(bank));

    while(!fstream_1.eof()) {
        fstream_1.read((char *) &bank, sizeof(bank));
        bank.print();
    }
}

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