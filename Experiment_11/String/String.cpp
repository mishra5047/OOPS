#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *s;
    int size;
public:
    String(char *arr) {
        size = strlen(arr);
        s = new char[size + 1];
        strcpy(s, arr);
    }

    void show() {
        cout << s;
    }
    ~String();
};

String::~String()
{
    delete []s;
}


class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(string abc){
        String strng("abc");
        String("abc");
    }
};

int main(){
    Console con;
    con.details();
    String str("This is a string class using Constructor and Destructor.");
    str.show();
}