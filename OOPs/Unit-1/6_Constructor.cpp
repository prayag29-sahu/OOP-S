#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
    car(string n,string c,float p)
    {
        name = n;
        color = c;
        price = p;
    }
    void display()
    {
        cout << "Car Name = " << name << endl;
        cout << "Car Color = " << color << endl;
        cout << "Car Price = " << price << endl;
    }
};
int main()
{
    car c1("BMW", "Black", 10);
    car c2("Swift", "Blue", 5);
    c1.display();
    c2.display();
}
