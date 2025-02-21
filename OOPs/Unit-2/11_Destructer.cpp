#include <iostream>
using namespace std;

class decon
{
    int a, b;

public:
    decon(int x, int y)
    {
        a = x;
        b = y;
    }
    ~decon()
    {
        cout << "destuctor";
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    decon d(5, 10);
    d.show();
}
/*
o/p
5 10
destuctor
*/