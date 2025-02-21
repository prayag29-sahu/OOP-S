#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    float salary;

public:
    Employee(string n, int a, float s)
    {
        name = n;
        age = a;
        salary = s;
    }
    void setage(int empage)
    {
        if (empage > 0)
            age = empage;
    }
    void display()
    {
        cout << "Employee Name = " << name << endl;
        cout << "Employee Age = " << age << endl;
        cout << "Employee Salary = " << salary << endl;
    }
};
int main()
{
    Employee e1("Ram", 24, 30000);
    e1.display();
    e1.setage(26);
    cout << "Implemented Data : " << endl;
    e1.display();
}
