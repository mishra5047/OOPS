#include <iostream>

using namespace std;

class Assignment{
    int a;

public:
    Assignment(int x = 0) { a = x ;}

    Assignment operator <= (Assignment const &obj){
        Assignment assignment;
        assignment.a  =  obj.a;
        return assignment;
    }

    void print(){
        cout<<"\n Value is "<<a;
    }
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }
    void input(){
        int a;
        cout<<"Enter The Value \n";
        cin>>a;
        Assignment  s_1(a);
        Assignment s = s_1;
        s.print();
    }
};

int main(){
    Console console;
    console.details();
    console.input();
}
