#include<iostream>
using namespace std;

class base
{
    protected:
        int x=10;
        public:
        void show()
        {
            cout << "x = "<< x << endl;
        }
};
class derived : public base
{
protected:
    int y = 20;

public:
    void show()
    {
        cout << "y = " << y << endl;
    }
};
int main()
{
    base b;
    derived d;
    b.show();
    d.show();
}