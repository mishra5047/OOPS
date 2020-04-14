#include<iostream>

using namespace std;

class BubbleSort{
    int arr[20] , swap;
    int n;

    public:

    BubbleSort(int num){
        n = num ;
    }

    void input(){
        cout<<"\n Enter The Elements  \n";
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        sort();
        print();
    }

    void sort(){
        for(int c=0 ; c < n-1 ; c++)
        {
            for(int d = 0 ; d <n-c-1 ; d++)
            {
                if(arr[d]>arr[d+1])
                {
                    swap =arr[d];
                    arr[d]=arr[d+1];
                    arr[d+1]=swap;
                }}}
            }

    void print(){
    cout<<"\n Elements After Sorting Are";
        for(int i  = 0; i < n; i++)
        cout<<" "<<arr[i];
    }
};


class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void in(){
        int ele;
        cout<<"\n Enter The Number Of Elements \n";
        cin>>ele;
        BubbleSort bubble(ele);
        bubble.input();
    }
};

int main()
{
    Console console;
    console.details();
    console.in();
}

