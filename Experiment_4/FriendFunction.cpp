#include <iostream>

using namespace std;

class B;

class A {
public:
    void showB(B&);
};

class B {
private:
    int b;

public:
    B() { b = 0; }
    friend void A::showB(B& x); // Friend function
};

void A::showB(B& x)
{
    cout << "B::b = " << x.b;
}

class Console{
public:
    void details(){
        cout<<"\n\t Static Data Member \n\n";
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t 06-CSE-A \n";
    }
};

int main()
{
    A a;
    B x;
    a.showB(x);
    return 0;
}
