#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
    car()
    {
        name = "BMW";
        color = "black";
        price = 10.5;
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
    car c1;
    c1.display();
}
