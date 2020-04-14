#include <iostream>

using namespace std;

class B;

class A {
public:
    void showMember(B&);
};

class B {
private:

    int b;

public:
    B() { b = 5; }
    friend void A::showMember(B& x);
};

void A::showMember(B& x)
{
    cout << "B::b = " << x.b;
}

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }
};

int main()
{
    Console console;
    console.details();
    A a;
    B x;
    a.showMember(x);
}
