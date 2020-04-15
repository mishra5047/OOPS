#include <iostream>

using namespace std;

class Compare
{
    string s;
public:

    Compare(string x = "") {
        s = x;
    }

    Compare operator <= (Compare const &a){
        if (a.s <= s)
            return  s;
        else
        return a.s;
    }

    void show() {
        cout <<"Greater String Is "<<s<<endl;
    };
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        string a, b;
        cout<<"Enter The Strings To Compare \n";
        cin>>a>>b;
        Compare s_1(a) , s_2(b);
        Compare s = (s_1,s_2);
        s.show();
    }
};

int main(){
    Console con;
    con.details();
    con.input();
}