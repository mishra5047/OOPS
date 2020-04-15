#include <iostream>
using namespace std;

template <typename T>
T maxAmong3(T x, T y, T z)
{
    if((x > y) && (x > z)) return x;
    else if ((y > x) && (y > z)) return y;
    return z;
}

class Console{
public:
    static void details(){
        cout<<"\n\t Abhishek Mishra \n";
        cout<<"\n\t    06-CSE-A \n\n";
    }

    void max(){
        cout << maxAmong3<int>(4, 10, 8) << endl;
        cout << maxAmong3<double>(4.9, 8.4, 11.6) << endl;
        cout << maxAmong3<string>("abc", "xyz", "def") << endl;
        cout<< maxAmong3<char>('b','z','h');
    }
};

int main()
{
        Console console;
        console.details();
        console.max();
}
