#include <iostream>

using namespace std;

class LinearSearch{
public:

    int Search(int arr[],int item, int length) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == item) return i + 1;
        }
        return 0;
    }
};

class Console{
    int ar[10];
public:
    void takeInput(){
        int ele, len;
        cout<<"Enter the number of elements\n";
        cin>>len;
        cout<<"\n Enter the elements\n";
        for(int i = 0; i < len; i++)
            cin>>ar[i];
        cout<<"Enter the element to Search \n";
        cin>>ele;
        search(ar, ele, len);
    }
    void search(int arr[], int ele, int length){
        LinearSearch linear;
        int s = linear.Search(ar, ele, length);
        if(s == 0) cout<<"not found";

        else
            cout<<"\n Element Found At Position "<<s;
    }

    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

};

int main() {

    Console console;
    console.details();
    console.takeInput();

}