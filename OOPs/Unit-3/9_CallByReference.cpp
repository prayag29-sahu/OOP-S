#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x, y;
    x = 10;
    y = 20;
    swap(&x, &y);
    cout << x <<" "<< y << endl;
}
// o/p (20 10)