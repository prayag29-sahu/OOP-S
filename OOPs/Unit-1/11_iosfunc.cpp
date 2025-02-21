#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    // 1. width() 
    int a;
    a = 4000;
    cout.width(10);
    cout << a<<endl; // o/p (      4000)
    cout.width(2);
    cout << a << endl; // o/p (4000)

    
    // 2. precision()
    float b = 34.657;
    // cout.precision(3); // o/p (34.7)
    // cout.precision(2); // o/p (35)
    // cout.precision(4); // o/p (34.66)
    cout.precision(4); // o/p (34.66)
    cout << b << endl;


    // 3. Fill()
    int c = 300;
    cout.width(10);
    cout.fill('*'); // o/p (*******300)
    cout << c << endl;

}
