#include<iostream>
using namespace std;
 
class area
{
    int l, b, d, s;
    float r,ar;

public:
    area(int len,int bred)
    {
        l = len;
        b = bred;
        ar = l * b;
        cout <<"Ractangle "<< ar << endl;
    }
    area(int side)
    {
        s=side;
        ar = s*s;
        cout << "Square " << ar << endl;
    }
    area(float rad)
    {
        r = rad;
        ar = 3.14* r * r;
        cout << "Circle " << ar << endl;
    }
};
int main(){
    area a(4,5);
    area b(5);
    area c(4);
}
/*
o/p
Ractangle 20
Square 25
Square 16
*/