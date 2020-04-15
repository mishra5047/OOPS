#include <iostream>

using namespace std;

class String
{
    string s;
public:

    String(string x = "") {
    s = x;
    }

    String operator + (String const &a){
        s = s + a.s;
        return s;
    }

    void show() {
        cout <<"\n Strings after concatenation are "<<s<<endl;
    };
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        string a,b;
        cout<<"Enter The Two Strings \n";
        cin>>a>>b;
        String s(a), s_1(b);
        String st = s + s_1;
        st.show();
    }
};

int main(){
    Console con;
    con.details();
    con.input();
}