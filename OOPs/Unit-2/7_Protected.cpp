#include <iostream>
using namespace std;

class base1
{
    int x;

protected:
    void display()
    {
        x = 10;
        cout << x << endl;
    }
};

class derived : public base1
{
public:

    void calldisplay()
    {

        display();
    }
};

int main()
{
    derived d;

    d.calldisplay();


    return 0;
}
