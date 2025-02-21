#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
    car(string n, string c, float p) : name(n), color(c), price(p) {}
    // car(const car &other)
    // {
    //     name = other.name;
    //     color = other.color;
    //     price = other.price;
    // }
    void display()
    {
        cout << "Car Name = " << name << endl;
        cout << "Car Color = " << color << endl;
        cout << "Car Price = " << price << endl;
    }
};
int main()
{
    car c("BMW", "Black", 10);
    car c1 = c;
    c1.display();

}
