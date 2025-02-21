#include <iostream>
using namespace std;

class car
{
public:
    string name, color;
    float price;
    void input()
    {
        cout << "Enter Car Name :  " << endl;
        cin >> name;
        cout << "Enter Car Color :  " << endl;
        cin >> color;
        cout << "Enter Car Price :  " << endl;
        cin >> price;
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
    c1.input();
    c1.display();
}
