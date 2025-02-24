#include<iostream>
using namespace std;

int cube(int a)
{
    return a * a * a;
}
int main()
{
    int x;
    x = 6;
    cout << "Cube of 6 is : " << cube(x) << endl;
    cout << x;
}
/*
o/p
Cube of 6 is : 216
6
*/
