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

class derived2 
{
public:
    void display2()
    {
        cout << "Derived2 Class" << endl;
    }
};

class derived3 : public derived1, public derived2
{
public:
    void display3()
    {
        cout << "Derived3 Class" << endl;
    }
};

int main()
{
    derived3 d3;
    d3.show();
    d3.display1();
    d3.display2();
    d3.display3();
}

/*
o/p
Base Class
Derived1 Class
Derived2 Class
Derived3 Class
*/