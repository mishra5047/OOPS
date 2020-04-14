#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *s;
    int size;
public:
    String(char *);
    ~String();
};

String::String(char *c)
{
    size = strlen(c);
    s = new char[size+1];
    strcpy(s,c);
}

String::~String()
{
    delete []s;
}
}

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }
};

int main(){
    Console con;
    con.details();
}