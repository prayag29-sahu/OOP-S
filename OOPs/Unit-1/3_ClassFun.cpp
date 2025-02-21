#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
    void input()
    {
        name = "BMW";
        color = "black";
        price = 10.5;
    }
    void display()
    {
        cout << "Car Name = " << name << endl;
        cout << "Car Color = " <<color << endl;
        cout << "Car Price = " <<price << endl;
    }
};
int main()
{
    car c1;
    c1.input();
    c1.display();
}
