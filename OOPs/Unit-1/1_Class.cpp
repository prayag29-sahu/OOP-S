#include <iostream>
using namespace std;

class car
{
public:
    string name = "BMW", color = "black";
    float price = 10.3;
};
int main()
{
    car c1;
    cout << "Car Name = " << c1.name << endl;
    cout << "Car Color = " << c1.color << endl;
    cout << "Car Price = " << c1.price << endl;
}
