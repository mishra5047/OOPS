# include <iostream>
# include <string.h>
#include <cstdio>

using namespace std;

class Concat{
    int arr_1[20];
public:

    void find(char a[], int l) {
        int count = 0;
        for(int j = 0; j <= l ; j++)
            if( (a[j] == 'a' || a[j] == 'A') || (a[j] == 'e' || a[j] == 'E')
            || (a[j] == 'i' || a[j] == 'I') || (a[j] == 'o' || a[j] == 'O')
            || (a[j] == 'u' || a[j] == 'U'))
            count++;

        cout<<"\n No of Vowels are "<<count;
    };
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        char a[30];
        cout<<"Enter The String \n";
        gets(a);
        int l = strlen(a);
        Concat concat;
        concat.find(a,l);
    }
};

int main(){
    Console console;
    console.details();
    console.input();
}