#include <iostream>
using namespace std;
class time
{
    int hours, min;

public:
    void settime(int h, int m)
    {
        hours = h;
        min = m;
    }
    void gettime()
    {
        cout << hours << ":" << min << endl;
        ;
    }
    void sum(time, time);
};
void time::sum(time t1, time t2)
{
    min = t1.min + t2.min;
    hours = min / 60;
    min = min % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time t1, t2, t3;
    t1.settime(1, 50);
    t2.settime(2, 20);
    t3.sum(t1, t2);
    cout << "t1= ";
    t1.gettime();
    cout << "t2= ";
    t2.gettime();
    cout << "t3= ";
    t3.gettime();
    return 0;
}
