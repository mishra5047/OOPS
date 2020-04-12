#include <iostream>

using namespace std;

class FixedDeposit {
public :
    int amount;

    void enterAmount(int am){
        if(am != 0)
        {
            amount = am;
            cout<<"\n amount is\t"<<am;
        }
        else
            cout<<"\n Enter Valid Input for Fixed Deposit";

    }};

class ShortTerm : public FixedDeposit {
    string time;
    int intrest;
public:

    void setPeriod(){
        time = "Short Term";
        intrest = 6;
        cout<<"\n Amount is "<<amount;
        cout<<"\n Time "<<time<<" Intrest "<<intrest;
    }
};


class LongTerm : public FixedDeposit {
    string time;
    int intrest;
public:

    void setPeriod(){
        time = "Long Term";
        cout<<"\n Amount is "<<amount;
        intrest = 8;
        cout<<"\n Time "<<time<<" Intrest "<<intrest;
    }
};

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t 06-CSE-A \n";
    }
};

int main(){

    Console console;
    console.details();

    ShortTerm obj_s;
    obj_s.enterAmount(1000);
    obj_s.setPeriod();

    LongTerm obj_l;
    obj_l.enterAmount(1500);
    obj_l.setPeriod();
}
