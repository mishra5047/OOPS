#include <iostream>

using namespace std;

class Assignment{
public:

    int assign(int a) {return a;}

    float assign(float a) {return a;}

    string assign(string a) {return a;}

    double assign(double a) {return a;}

};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }};

int main(){
    Console console;
    console.details();

    Assignment assignment;
    cout<<assignment.assign(5)<<"\n";
    cout<<assignment.assign(6.5)<<"\n";
    cout<<assignment.assign(440.540)<<"\n";
    cout<<assignment.assign("String")<<"\n";
}