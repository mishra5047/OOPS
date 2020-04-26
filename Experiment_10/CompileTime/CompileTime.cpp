#include <iostream>

// Compile Time Polymorphis can be implemented using Method  Overloading and Operator Overloading

using namespace std;

// Following is the Class for Operator Overloading

class AddOperatorOverloading{
    int a;

public:
    AddOperatorOverloading(int x = 0) { a= x ;}

    AddOperatorOverloading operator + (AddOperatorOverloading const &obj){
        AddOperatorOverloading addition;
        addition.a  = a + obj.a;
        return addition;
    }

    void print(){
        cout<<"\n Sum Is = "<<a;
    }
};

//Class for Method Overloading

class AddMethodOverloading{

public :
    int addValues(int a, int b){
    return a + b;
    }

    string addValues(const string a,const string b){
        return a+ b;
    }

    long addValues(long a, long b){
        return a + b;
    }

    float addValues(float a, float b){
        return a + b;
    }

    double addValues(double a, double b){
        return  a + b;
    }
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        int a,b,c,d,e;
        string string1, string2;
        float fl_1, fl_2;
        double db_1, db_2;

        cout<<"Enter Your Choice \n 1. Operator Overriding \n 2. Method Overloading \n";
        cin>>e;

        if(e == 1) {
            cout << "Enter The Two Numbers \n";
            cin >> a >> b;
            AddOperatorOverloading s(a), s_1(b);
            AddOperatorOverloading sum = s + s_1;
            sum.print();
        } else {
            AddMethodOverloading addMethod;
            cout<<"\n Implementation On Different Data Types ";
            cout<<"\n Addition of Integers -> "<<addMethod.addValues(5,6);
            cout<<"\n Addition of String -> "<<addMethod.addValues("Hi ", "There");
            cout<<"\n Addition of Floats -> "<<addMethod.addValues(5.0,7.0);
            cout<<"\n Addition of Doubles -> "<<addMethod.addValues(25.7014, 54.7410)<<endl;
        }
    }
};

int main(){
    Console console;
    console.details();
    console.input();
}

