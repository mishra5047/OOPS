#include <iostream>

using namespace std;

class Addition{

public:
    int add + (int a, int b){
        return a + b;
    }

    float add + (float a, float b){

        return a + b;
    }

    string add + (string a, string b){
        return a + b;
    }

    double add + (double a, double b){
        return a + b;
    }

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
    Addition addition;
    cout<<addition.add(5,11)<<"\n";
    cout<<addition.add(6.5, 15.7)<<"\n";
    cout<<addition.add(440.540, 500.450)<<"\n";
    cout<<addition.add("ABC", "DEF")<<"\n";
}