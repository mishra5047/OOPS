#include<iostream>

using namespace std;

class Matrix {
public:
int a[10][10], b[10][10];

    bool check(int a, int b){
        if (a != b) return false;
        else return true;
    }

    void input(int d, int e, int g, int h){
        cout<<"enter the elements of the first matrix \n";
        for(int i=0;i<d;i++)
        {for(int j=0;j<g;j++)
                cin>>a[i][j];}

        cout<<"enter the elements of the second matrix \n";
        for(int i=0;i<e;i++)
        {for(int j=0;j<h;j++)
                cin>>b[i][j];}

        multiply(a, b, d, g,h);
    }
    void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
        int i, j, k;
        int mul[10][10];
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++)
                mul[i][j] = 0;
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                for (k = 0; k < c1; k++)
                    mul[i][j] += a[i][j] * b[k][j];
            }
        }
        cout << "The Resultant matrix is\n";
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                cout << " " << mul[i][j];
                if (j == c2 - 1)
                    cout << endl;
            }
        }
    }
};

class Input{
public:

 void input(){
     int c1,c2,r1,r2;
     cout<<"Enter the order of first matrix \n";
     cin>>r1>>c1;
     cout<<"Enter the order of second matrix \n";
     cin>>r2>>c2;

     Matrix mat;
     mat.input(r1, r2, c1,c2);
 }
    void details(){
        cout<<"\n\n\t Abhishek Mishra";
        cout<<"\n 06-CSE-A\n";
    }
};
int main()
{

    Input input;
    input.details();
    input.input();
}



