#include<iostream>
using namespace std;

inline float sq(float x)
{
    return (x * x);
} 
int main()
{
    float a = 5,b;
    b=sq(a);
    cout << b;
}