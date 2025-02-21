#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
};
int main()
{
    car c1;
    c1.name = "BMW";
    c1.color = "black";
    c1.price = 10.3;
    cout << "Car Name = " << c1.name << endl;
    cout << "Car Color = " << c1.color << endl;
    cout << "Car Price = " << c1.price << endl;
}
