#include <iostream>
using namespace std;

class complex
{
    float x, y;

public:
    void input(float real, float img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex, complex);
    void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}
void complex::show(complex c)
{
    cout << c.x << "+i" << c.y << endl;
}
int main()
{
    complex a, b, c;
    a.input(1.41, 4.21);
    b.input(2.41, 2.31);
    c = sum(a, b);
    cout << "a= "; a.show(a);
    cout << "b= "; b.show(b);
    cout << "c= "; c.show(c);

    return 0;
}
