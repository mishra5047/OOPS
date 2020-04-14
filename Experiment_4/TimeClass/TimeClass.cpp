#include<iostream>
#include<iomanip>

using namespace std;

class Time
{
private :
    int hour;
    int minute;
    int second;
public :;
    Time(){
        hour = 0, minute = 0, second = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void print()
    {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second << "\n";
    }
};

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }
};

int main()
{
    Console console;
    console.details();
    Time t1(10, 50, 59);
    t1.print();
    Time t2;
    t2.print();
    t2.setTime(6, 39, 9);
    t2.print();
}