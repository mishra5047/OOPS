#include <iostream>

using namespace std;

class A {
public:
    int compareNumber(int a, int b);
};

int A::compareNumber(int x, int y)
{
    if (x > y) return x;
    return y;
}

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void input(){
        int x,y;
        cout<<"\n Enter the numbers to compare \n";
        cin>>x>>y;
        A a;
        cout<<"\n The Larger Number is "<<a.compareNumber(x,y);
    }
};

int main()
{
    Console console;
    console.details();
    console.input();
}
