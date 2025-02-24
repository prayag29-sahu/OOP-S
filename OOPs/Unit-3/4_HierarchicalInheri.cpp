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

class derived1 : public base
{
public:
    void display1()
    {
        cout << "Derived1 Class" << endl;
    }
};

class derived2 : public base
{
public:
    void display2()
    {
        cout << "Derived2 Class" << endl;
    }
};
int main()
{
    derived1 d1;
    derived2 d2;
    d1.show();
    d2.show();
    d1.display1();
    d2.display2();
}

/*
o/p
Base Class
Base Class
Derived1 Class
Derived2 Class
*/