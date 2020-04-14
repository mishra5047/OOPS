#include<iostream>

using namespace std;

class number
{
    int no,a;
public:
    void input()
    {
        cout<<"\nEnter the number: ";
        cin>>no;
    }
    void check()
    {
        int i,j;
        cout<<"\nThe prime numbers are:\n\n";

        for(i=2;i<=no;i++)
        {
            a=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
                cout<<i<<"\t";
        }
    }
};
class Console{
public:
        void details(){
            cout<<"\n\t Abhishek Mishra \n";
            cout<<"\n\t    06-CSE-A \n";
        }

};
int main()
{
    Console console;
    console.details();
    number z;
    z.input();
    z.check();
}