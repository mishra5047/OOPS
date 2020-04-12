#include<iostream>

using namespace std;

class Armstrong
{
    int num,sum;
    int n,a;
public:
    void input()
    {
        cout<<"\n Enter the number:";
        cin>>num;
    }
    void check()
    {
        sum=0;
        n=num;
        while(n>0)
        {
            a=n%10;
            sum=sum+a*a*a;
            n=n/10;
        }
        if(num==sum)
            cout<<"\nThe number "<<sum<<" is amstrong\n";
        else
            cout<<"\nThe number "<<num<<" is not amstrong\n";
    }
};

class Console{
public:
    void details(){
        cout<<"\n\n\t Abhishek Mishra";
        cout<<"\n\n\t 06-CSE-A\n";
    }

};
int main()
{
    Console con;
    con.details();
    Armstrong am;
    am.input();
    am.check();
}
