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
    cout << "Enter Car Name :  " << endl;
    cin >> c1.name;
    cout << "Enter Car Color :  " << endl;
    cin >> c1.color;
    cout << "Enter Car Price :  " << endl;
    cin >> c1.price;
    cout << "Car Name = " << c1.name << endl;
    cout << "Car Color = " << c1.color << endl;
    cout << "Car Price = " << c1.price << endl;
}
