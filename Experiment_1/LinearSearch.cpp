#include <iostream>

using namespace std;

class LinearSearch{
public:

    int Search(int arr[],int item){
        for(int i = 0; i <= sizeof(arr); i++){
            if(arr[i] == item ) return i+1;
        }
        return 0;
    }

};

class Console{
    int ar[10];
public:
    void takeInput(){

        int ele;
        cout<<"Enter the elements\n";
        for(int i = 0; i < 10; i++)
            cin>>ar[i];

        cout<<"Enter the element to Search \t\t";
        cin>>ele;
        search(ar, ele);
    }
    void search(int arr[], int ele){
        LinearSearch linear;
        int s = linear.Search(ar, ele);
        if(s != 0) cout<<"element found at \t"<<s;
        else
            cout<<"not found";
    }

    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t 06-CSE-A \n\n";
    }

};

int main() {

    Console console;
    console.details();
    console.takeInput();

}