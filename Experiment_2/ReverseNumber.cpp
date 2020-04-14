#include <iostream>

using namespace std;

    class Reverse{
    public:
    int rev ;
    int reverse(int no){
        rev = 0;
        {
            while (no > 0){
                rev = rev * 10 + no % 10;
                no = no /10 ;
        }}
        return rev;
    }

    };

    class Console{
    int no;

    public:

    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void input(){
        cout<<"\nEnter the number to reverse";
        cin>>no;

       Reverse reverse;
       int i = reverse.reverse(no);
        cout<<i;
    }
    };

    int main(){
    Console console;
    console.input();
    }