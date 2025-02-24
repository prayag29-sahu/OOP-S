#include <iostream>
using namespace std;

class base1
{
public:
    void show1()
    {
        cout << "Base1 Class" << endl;
    }
};

class base2
{
public:
    void show2()
    {
        cout << "Base2 Class" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    derived d;
    d.show1();
    d.show2();
    d.display();
}