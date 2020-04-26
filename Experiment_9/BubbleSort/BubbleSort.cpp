#include<iostream>

using namespace std;

    template <typename T>
    T sort(T arr[]) {
        int n = sizeof(arr);

        for (int c = 0; c < n - 1; c++) {
            for (int d = 0; d < n - c - 1; d++) {
                if (arr[d] > arr[d + 1]) {
                    int swap;
                    swap = arr[d];
                    arr[d] = arr[d + 1];
                    arr[d + 1] = swap;
                }
            }
        }
    }

class Console{
public:
    void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n";
    }

    void in(){
        int a;
        int ele;
        cout<<"Enter Your Choice \n 1. Integers \n 2. Characters \n";
        cin>>a;
        if(a == 1){
            cout << "\n Enter The Number Of Elements \n";
            cin >> ele;
            int arr[ele];
            cout << "Enter The Elements \n";
            for (int i = 0; i < ele; i++) {
                cin >> arr[i];
            }
            sort(arr);
            cout << "Sorted Array is \n";
            for (int j = 0; j < ele; j++) {
                cout << arr[j] << "\t";
            }
        }
        else {
            cout<<"\n Enter The Number Of Elements \n";
            cin>>ele;
            char arr[ele];
            cout<<"Enter The Elements \n";
            for (int i = 0; i < ele ; i++) {
                cin>>arr[i];
            }
            sort(arr);

            cout<<"Sorted Array is \n";
            for (int j = 0; j < ele ; j++) {
                cout<<arr[j]<<"\t";
            }
        }    }
};

int main()
{
    Console console;
    console.details();
    console.in();
}

