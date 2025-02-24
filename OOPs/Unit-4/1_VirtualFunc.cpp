#include<iostream>
using namespace std;

class base
{
    public:
    void show()
    {
        cout << "base show" << endl;
    }
    virtual void display()
    {
        cout << "base display" << endl;
    }
};
class derived:public base
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
    base b, *bp;
    derived d;
    bp = &b;
    bp->show();
    bp->display();
    bp = &d;
    bp->show();
    bp->display();
}
/*
o/p
base show
base display
base show
derived display
*/