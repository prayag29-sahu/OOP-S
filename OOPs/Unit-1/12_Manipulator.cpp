#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 1. setw()
    int a;
    a = 4000;
    cout<<setw(10);
    cout << a << endl; // o/p (      4000)
    cout<<setw(2);
    cout << a << endl; // o/p (4000)

    // 2. setprecision()
    float b = 34.657;
    cout<<setprecision(3); // o/p (34.7)
    cout << b << endl;
    cout<<setprecision(2); // o/p (35)
    cout << b << endl;
    cout<<setprecision(4); // o/p (34.66)
    cout << b << endl;

    // 3. setfill()
    int c = 300;
    cout<<setw(10);
    cout<<setfill('*'); // o/p (*******300)
    cout << c << endl;
}
