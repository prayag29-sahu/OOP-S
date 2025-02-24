#include <iostream>
using namespace std;

class base
{
public:
    void show()
    {
        cout << "base show" << endl;
    }
    virtual void display() = 0;
};
class derived : public base
{
public:
    void show()
    {
        cout << "derived show" << endl;
    }
    void display()
    {
        cout << "derived display" << endl;
    }
};

int main()
{
    // base b, *bp; // give error bcs pure virtual class is abstract base class which not create any objects
    derived d;
    d.show();
    d.display();
}

