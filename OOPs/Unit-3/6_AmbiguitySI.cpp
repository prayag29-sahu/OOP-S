#include <iostream>
using namespace std;

class base
{
public:
    void show()
    {
        cout << "Base Class" << endl;
    }
};

class derived : public base
{
public:
    void display()
    {
        show();
        cout << "Derived Class" << endl;
    }
};
int main()
{
    derived d;
    d.show();
    d.base::show();
    d.display();
}
/*
o/p
Base Class
Base Class
Base Class
Derived Class
*/