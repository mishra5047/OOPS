# include <iostream>
# include <string.h>
#include <cstdio>

using namespace std;

class Concat{
int arr_1[20];
public:

    void concat(char a_1[], char b_1[], int a) {
    for(int j = 0; b_1[j] != '\0' ; j++, a++)
        a_1[a] = b_1[j];

        a_1[a] = '\0';

        cout<<"\n Concatenated String is "<<a_1<<endl;
    };
};

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void input(){
        char a[30],b[20];
        cout<<"Enter The Two Strings \n";
        gets(a);
        gets(b);
        int l = strlen(a);
        Concat concat;
        concat.concat(a,b,l);
    }
};

int main(){
    Console console;
    console.details();
    console.input();
}