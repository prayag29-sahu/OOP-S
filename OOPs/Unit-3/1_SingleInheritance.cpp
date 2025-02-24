#include<iostream>
using namespace std;

class base
{
    public:
    void show()
    {
        cout << "Base Class"<<endl;
    }
};

class derived:public base{
    public:
    void display()
    {
        cout << "Derived Class"<<endl;
    }
};
int main()
{
    derived d;
    d.show();
    d.display();
}