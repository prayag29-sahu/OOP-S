#include<iostream>
using namespace std;

class mes
{
    float m, cm, mm;
    public:
    void get(float a,float b,float c)
    {
        this->m = a;
        this->cm = b;
        this->mm = c;
    }
    void show()
    {
        cout << "m = " << this->m << endl;
        cout << "cm = " << this->cm << endl;
        cout << "mm = " << this->mm << endl;
    }
};
int main()
{
    mes m1, m2;
    m1.get(5.5, 355.2, 542.34);
    m2 = m1;
    cout << "m1 data " << endl;
    m1.show();
    cout << "m2 data" << endl;
    m2.show();
    return 0;
}