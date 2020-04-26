#include <iostream>

using namespace std;

class Copy
{
    string s;
public:

    Copy(string x = "") {
    s = x;
    }

    Copy operator + (Copy const &a){
        s =  s + a.s;
        return s;
    }

    void show() {
        cout <<"\n Value Is "<<s<<endl;
    };
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        string a;
        cout<<"Enter The Value Of The string \n";
        cin>>a;
        Copy  s_1(a);
        Copy s = s_1;
        s.show();
    }
};

int main(){
    Console con;
    con.details();
    con.input();
}