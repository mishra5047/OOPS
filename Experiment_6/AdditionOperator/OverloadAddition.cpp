#include <iostream>

using namespace std;

class Addition{
int a;

public:
    Addition(int x = 0) { a= x ;}

    Addition operator + (Addition const &obj){
        Addition addition;
        addition.a  = a + obj.a;
        return addition;
    }

    void print(){
        cout<<"\n sum is "<<a;
    }
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

     void input(){
        int a,b;
        cout<<"Enter The Two Numbers \n";
        cin>>a>>b;
        Addition s(a), s_1(b);
        Addition sum = s + s_1;
        st.print();
    }
};

int main(){
    Console console;
    console.details();
    console.input();
}
