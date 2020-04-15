# include <iostream>

using namespace std;

class MaxArray{
    int max;
    int swap;
public:
    int maxEle(int arr[], int l){
        for(int i = 0; i < l; i++){
            if(arr[i]>arr[i+1])
                {
                    swap = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = swap;
                }
        }
        return arr[l - 1];
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

        int ar[ele];
        cout<<"\n Enter The Elements \n";
        for (int i = 0; i < ele; i++)
            cin>>ar[i];

        MaxArray maxArray;
        cout<<"\n The Greatest Element Of The Array is "<<maxArray.maxEle(ar,ele);
    }
};

int main()
{
    Console console;
    console.details();
    console.in();
}
